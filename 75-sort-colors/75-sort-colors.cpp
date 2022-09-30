#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  void sortColors(vector<int> &nums) {
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
      if (nums[i] == 0)
        v.push_back(nums[i]);
    for (int i = 0; i < nums.size(); i++)
      if (nums[i] == 1)
        v.push_back(nums[i]);
    for (int i = 0; i < nums.size(); i++)
      if (nums[i] == 2)
        v.push_back(nums[i]);
    for (int i = 0; i < nums.size(); i++)
      nums[i] = v[i];
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