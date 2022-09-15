#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> findOriginalArray(vector<int> &changed) {
    sort(changed.begin(), changed.end());
    vector<int> original;

    bool mp[changed.size()];
    memset(mp, true, sizeof(mp));
    for (int i = 0; i < changed.size(); i++)
      if (mp[i]) {
        int lo = i + 1;
        int hi = changed.size() - 1;
        int idx = 200000;
        while (lo <= hi) {
          int mid = (lo + hi) / 2;
          if (changed[mid] == 2 * changed[i]) {
            if (mp[mid] == true) {
              idx = min(idx, mid);
              hi = mid - 1;
            } else
              lo = mid + 1;
          } else if (changed[mid] < 2 * changed[i])
            lo = mid + 1;
          else
            hi = mid - 1;
        }
        if (idx != 200000) {
          original.push_back(changed[i]);
          mp[i] = false;
          mp[idx] = false;
        } else {
          original.clear();
          return original;
        }
      }
    return original;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   string s;
//   cin >> s;
//   int ans = max(find_even(s), find_odd(s));
//   cout << ans << endl;
// }