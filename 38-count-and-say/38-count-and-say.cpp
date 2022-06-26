#include <bits/stdc++.h>
#include <string>
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
#include <stdlib.h>
class Solution {
public:
  // vector<int> num_to_vect(int n) {
  //   vector<int> v;
  //   while (n) {
  //     v.push_back(n % 10);
  //     n /= 10;
  //   }
  //   reverse(v.begin(), v.end());
  //   return v;
  // }
  string process(string s) {
    int cnt = 0;
    s += '*';
    string ans;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == s[i + 1])
        cnt++;
      else {
        cnt++;
        ans += (cnt + '0');
        ans += s[i];
        cnt = 0;
      }
    }
    return ans;
  }
  string countAndSay(int n) {
    if (n == 1)
      return "1";

    string ans = "1";
    for (int i = 1; i < n; i++) {
      ans = process(ans);
      // cout << ans << endl;
    }
    return ans;
  }
};

// int main() {

//   // freopen("input.txt", "r", stdin);
//   // freopen("output.txt", "w", stdout);

//   int n;
//   cin >> n;
//   Solution s;
//   cout << s.countAndSay(n) << endl;
// }
