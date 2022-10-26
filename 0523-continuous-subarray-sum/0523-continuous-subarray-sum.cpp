class Solution {
public:
  bool checkSubarraySum(vector<int> &nums, int k) {
    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];
      sum %= k;
      if (sum == 0 && i + 1 >= 2){
          cout<<"HI"<<endl;
        return true;
      }
        cout<<mp[sum]<<endl;
      // cout << sum << endl;
      if (mp[sum] != 0 && (i - mp[sum] )+1 >= 2)
        return true;
        if(mp[sum]==0)
      mp[sum] = i + 1;
    }
    
    return false;

  
  }
};