#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> sumEvenAfterQueries(vector<int> &nums,
                                  vector<vector<int>> &queries) {
    int sum = 0;
    for (auto x : nums) {
      if (x % 2 == 0)
        sum += x;
    }

    vector<int> anss;
    for (auto x : queries) {
      int val = x[0];
      int idx = x[1];
      int prev = nums[idx];
      if (nums[idx] % 2 == 0)
        sum -= nums[idx];
      nums[idx] += val;

      if (nums[idx] % 2 == 0)
        sum += nums[idx];

      anss.push_back(sum);
    }
    return anss;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n;
//   cin >> n;
//   vector<int> A, B;
//   int m;

//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     A.push_back(x);
//   }
//   cin >> m;
//   for (int i = 0; i < m; i++) {
//     int x;
//     cin >> x;
//     B.push_back(x);
//   }
//   Solution sol;
//   cout << sol.findLength(A, B) << endl;
// }