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
  ll maxx(ll a, ll b) { return a > b ? a : b; }
  bool check_palindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i <= j) {
      if (s[i] != s[j])
        return false;
      i++;
      j--;
    }
    return true;
  };
  bool check(string s, int len) {

    int i = 0;
    int j = len - 1;

    while (j < s.size()) {
      string _s;
      for (int k = i; k <= j; k++)
        _s += s[k];
      if (check_palindrome(_s))
        return true;
      i++;
      j++;
    }
    return false;
  };
  int check_even(string s) {
    vector<int> even_lens;
    for (int i = 2; i <= s.size(); i += 2)
      even_lens.push_back(i);

    int lo = 0;
    int hi = even_lens.size() - 1;

    ll ans = 0;
    while (lo <= hi) {
      int mid = (lo + hi) / 2;

      int mid_val = even_lens[mid];
      if (check(s, mid_val)) {

        ans = maxx(ans, mid_val);
        lo = mid + 1;
      } else
        hi = mid - 1;
    }

    return ans;
  }
  int check_odd(string s) {
    vector<int> odd_lens;
    for (int i = 1; i <= s.size(); i += 2)
      odd_lens.push_back(i);
    int lo = 0;
    int hi = odd_lens.size() - 1;
    ll ans = 0;
    while (lo <= hi) {
      int mid = (lo + hi) / 2;
      int mid_val = odd_lens[mid];
      if (check(s, mid_val)) {
        ans = maxx(ans, mid_val);
        lo = mid + 1;
      } else
        hi = mid - 1;
    }
    return ans;
  }
  string longestPalindrome(string s) {
    int even_ans = check_even(s);
    int odd_ans = check_odd(s);
    int ans = maxx(even_ans, odd_ans);

    int i = 0;
    int j = ans - 1;
    while (j < s.size()) {
      string _s = "";
      for (int k = i; k <= j; k++)
        _s += s[k];
      if (check_palindrome(_s) == true)
        return _s;
      i++;
      j++;
    }
    return "";
  }
};
// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   string s;
//   cin >> s;
//   Solution sol;
//   cout << sol.longestPalindrome(s) << endl;
// }
