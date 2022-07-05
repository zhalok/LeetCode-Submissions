#include <bits/stdc++.h>
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
public:
  string simplifyPath(string path) {
    path += '/';
    vector<string> directories;

    string s;
    for (int i = 1; i < path.size(); i++) {
      if (path[i] == '/') {
        if (s.size() != 0) {
          if (s.size() == 1 && s[0] == '.') {
            s.clear();
            continue;
          } else if (s == "..") {
            if (directories.size())
              directories.pop_back();

          } else
            directories.push_back(s);
        }
        s.clear();

      } else {
        s += path[i];
      }
    }

    // vector<string> _directories;
    // for (int i = 0; i < directories.size(); i++)
    //   if (directories[i] == "..") {
    //     if (_directories.size())
    //       _directories.pop_back();
    //   } else
    //     _directories.push_back((directories[i]));

    string finalPath = "";
    for (int i = 0; i < directories.size(); i++) {
      finalPath += '/';
      finalPath += directories[i];
    }
    if (finalPath.size() == 0)
      finalPath += '/';
    return finalPath;
  }
};
// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   string path;
//   cin >> path;
//   Solution sol;
//   cout << sol.simplifyPath(path) << endl;
// }
