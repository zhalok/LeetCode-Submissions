#include <bits/stdc++.h>
#define inf 10001
using namespace std;
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 2; j < nums.size(); j++)
        if (nums[i] == nums[j])
          nums[j] = -inf;
    }
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != -inf) {
        cnt++;
        int j = i;
        while (j > 0&&nums[j - 1] == -inf ) {
          swap(nums[j], nums[j - 1]);
          j--;
        }
      }
    }
    return cnt;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n;
//   cin >> n;
//   vector<int> v;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
//   Solution sol;
//   int ans = sol.removeDuplicates(v);
//   for (auto x : v)
//     cout << x << " ";
//   cout << endl;
//   cout << ans << endl;
// }