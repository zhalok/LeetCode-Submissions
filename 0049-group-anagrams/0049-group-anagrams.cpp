#include <bits/stdc++.h>
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

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        vector<pair<string, string>> v;

        for (int i = 0; i < strs.size(); i++)
        {
            string sortedStr = strs[i];
            sort(all(sortedStr));
            v.push_back({sortedStr, strs[i]});
        }

        sort(all(v));

        v.push_back({"*", "*"});

        vector<vector<string>> ans;
        vector<string> tempAns;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i].first == v[i + 1].first)
                tempAns.push_back(v[i].second);
            else
            {
                tempAns.push_back(v[i].second);
                ans.push_back(tempAns);
                tempAns.clear();
            }
        }

        return ans ;
    }
};

// int main()
// {

//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     int n;
//     cin >> n;
// }
