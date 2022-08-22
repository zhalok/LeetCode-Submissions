#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstring>
#include <string>
#include <system_error>
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

  int cumsum[200][10001];

  bool check(string s, int len) {
    int i = 1;
    int j = len;
    set<char> ss;
    while (j < s.size()) {
      bool flag = true;
      for (int k = 0; k < 200; k++)
        if (cumsum[k][j] - cumsum[k][i - 1] > 1) {
          flag = false;
          break;
        }
      if (flag == true)
        return true;

      i++;
      j++;
    }
    return false;
  }

public:
  ll maxx(ll a, ll b) { return (a > b) ? a : b; }

  int lengthOfLongestSubstring(string s) {
    s = "*" + s;
    int i = 1;
    int j = 1;
    ll ans = 0;
    map<char, int> last;
    while (j < s.size()) {
      // cout << j << endl;
      if (last[s[j]] >= i) {
        i = last[s[j]] + 1;

        // last[s[j]] = j;
        ans = maxx(ans, (j - i + 1));
      } else {
        last[s[j]] = j;
        ans = maxx(ans, j - i + 1);
        j++;
      }
    }
    return ans;
  }
};
// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   string s;
//   cin >> s;
//   Solution sol;
//   cout << sol.lengthOfLongestSubstring(s) << endl;
// }
