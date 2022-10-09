#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <queue>
#include <vector>
#define inf 100000
using namespace std;



class Solution {
public:
  vector<int> v;
  void divide(int lo, int hi) {
    if (lo == hi)
      return;

    int mid = (lo + hi) / 2;
    divide(lo, mid);
    divide(mid + 1, hi);
    vector<int> temp;
    for (int i = mid + 1; i <= hi; i++)
      temp.push_back(v[i]);
    reverse(temp.begin(), temp.end());
    for (int i = mid + 1, j = 0; i <= hi; i++, j++)
      v[i] = temp[j];
  }
  vector<int> grayCode(int n) {
    int limit = pow(2, n);
    v.clear();
    for (int i = 0; i < limit; i++) {
      v.push_back(i);
    }
    divide(0, limit - 1);
    return v;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n;
//   cin >> n;
//   Solution sol;
//   vector<int> v;
//   v = sol.grayCode(n);
//   for (auto x : v)
//     cout << x << " ";
//   cout << endl;
// }