#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
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
  void check(int num, int n, int k) {
    int num_size = log10(num) + 1;
    if (num_size == n) {
      if (vv.size() == 0 || vv.back() != num)
        vv.push_back(num);
      return;
    }
    int last_digit = num % 10;
    if (last_digit + k <= 9) {
      num *= 10;
      num += (last_digit + k);
      check(num, n, k);
      num /= 10;
    }
    if (last_digit - k >= 0) {
      num *= 10;
      num += (last_digit - k);
      check(num, n, k);
      num /= 10;
    }
  }
  vector<int> numsSameConsecDiff(int n, int k) {
    vector<int> _v;
    for (int i = 1; i < 10; i++) {

      check(i, n, k);
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
