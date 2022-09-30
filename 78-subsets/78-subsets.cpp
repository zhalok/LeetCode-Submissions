#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> ans;
  vector<int> temp_ans;
  vector<int> v;
  void func(int idx, int n) {
    if (idx == n) {
      ans.push_back(temp_ans);
      return;
    }
    temp_ans.push_back(v[idx]);
    func(idx + 1, n);
    temp_ans.pop_back();
    func(idx + 1, n);
  }
  vector<vector<int>> subsets(vector<int> &nums) {
    ans.clear();
    temp_ans.clear();
    v.clear();
    for (int i = 0; i < nums.size(); i++) {
      v.push_back(nums[i]);
    }
    func(0, nums.size());
    return ans;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n, k;
//   cin >> n >> k;
//   Solution sol;
//   vector<vector<int>> v = sol.combine(n, k);
//   for (auto x : v) {
//     for (auto y : x)
//       cout << y << " ";
//     cout << endl;
//   }
// }