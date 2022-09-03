#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstring>
#include <new>
#include <ostream>
#include <string>
#include <system_error>
#include <unistd.h>
#include <vector>
using namespace std;
using namespace std;
#define zhalok Zhalok
#define inf INT_MAX
#define ll long long int
#define ull unsigned long long
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define negloop(i, a, b) for (ll i = a; i >= b; i--)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define pb push_back
#define be begin()
#define en end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second
#define MOD 1000000007
#define sz 10001
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(), v.end()
#define eps 1e-8
#define pi acos(-1.0)

class Solution {
public:
  vector<int> vv;
  void check(vector<int> v, int n, int k) {
    if (v.size() == n) {
      int num = 0;
      for (auto x : v) {
        num *= 10;
        num += x;
      }
      if (vv.size() == 0 || vv.back() != num)
        vv.push_back(num);
      return;
    }
    int x = v.back();
    if (x + k <= 9) {
      v.push_back(x + k);
      check(v, n, k);
      v.pop_back();
    }
    if (x - k >= 0) {
      v.push_back(x - k);
      check(v, n, k);
      v.pop_back();
    }
  }
  vector<int> numsSameConsecDiff(int n, int k) {
    vector<int> _v;
    for (int i = 1; i < 10; i++) {
      _v.clear();
      _v.push_back(i);
      check(_v, n, k);
    }
    // vector<int> _vv;
    // for (auto x : vv)
    //   _vv.push_back(x);
    return vv;
  }
};
// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   int n, k;
//   cin >> n >> k;
//   Solution sol;
//   vector<int> v = sol.numsSameConsecDiff(n, k);
//   for (auto x : v)
//     cout << x << endl;
// }
