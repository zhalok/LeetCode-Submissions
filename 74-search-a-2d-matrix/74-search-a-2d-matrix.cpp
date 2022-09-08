class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            if(target>=matrix[mid][0] and target<=matrix[mid][m-1])
            {
                int idx = lower_bound(matrix[mid].begin(),matrix[mid].end(),target)-matrix[mid].begin();
                if(idx>=0 and idx<m and matrix[mid][idx]==target)
                    return true;
                
                else return false;
            }
            else if(target<matrix[mid][0])
                hi=mid-1;
            else if(target>matrix[mid][m-1])
                lo=mid+1;
        }
        return false ;
    }
};