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
  void _combine(int i, int k, int n) {
    if (k == 0) {
      ans.push_back(temp_ans);
      return;
    }
    if (i > n)
      return;
    for (int idx = i; idx <= n; idx++) {
      temp_ans.push_back(idx);
      _combine(idx + 1, k - 1, n);
      temp_ans.pop_back();
    }
  }
  vector<vector<int>> combine(int n, int k) {
    ans.clear();
    temp_ans.clear();
    for (int i = 1; i <= n; i++) {
      temp_ans.push_back(i);
      _combine(i + 1, k - 1, n);
      temp_ans.pop_back();
    }
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