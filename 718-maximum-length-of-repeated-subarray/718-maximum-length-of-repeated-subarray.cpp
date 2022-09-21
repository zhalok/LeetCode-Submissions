#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> v1;
  vector<int> v2;
  int dp[1001][1001];
  int findLen(int i, int j) {
    if (i == v1.size() || j == v2.size())
      return 0;
    if (dp[i][j] != -1)
      return dp[i][j];
    if (v1[i] == v2[j])
      return dp[i][j] = 1 + findLen(i + 1, j + 1);
    else
      return dp[i][j] = 0;
  }
  int findLength(vector<int> &A, vector<int> &B) {
    v1.clear();
    v2.clear();
    for (auto x : A) {
      v1.push_back(x);
    }
    for (auto x : B) {
      v2.push_back(x);
    }
    // for (auto x : v1)
    //   cout << x << " ";
    int ans = 0;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < v1.size(); i++)
      for (int j = 0; j < v2.size(); j++)
        ans = max(ans, findLen(i, j));

    return ans;
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