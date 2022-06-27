#include <bits/stdc++.h>
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

int maxx(int a, int b) { return (a > b) ? a : b; }

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    vector<int> st;
    // nums.push_back(0);
    int final_product = -inf;
    int prod = 1;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        prod *= nums[i];
        final_product = maxx(final_product, prod);
        st.push_back(nums[i]);
      } else {
        // if (i != nums.size() - 1)
          final_product = maxx(final_product, 0);
        prod = 1;
        while (st.size()) {
          prod *= st.back();
          st.pop_back();
          final_product = maxx(final_product, prod);
        }
        prod = 1;
      }
    }
      prod=1;
      while(st.size())
      {
          prod *= st.back();
          st.pop_back();
          final_product= maxx(final_product,prod);
      }
    return final_product;
  }
};

// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   int n;
//   cin >> n;
//   vector<int> v;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
//   Solution sol;
//   cout << sol.maxProduct(v) << endl;
// }
