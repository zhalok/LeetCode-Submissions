#include <bits/stdc++.h>
#include <cstddef>
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

// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *idx1 = l1;
    ListNode *idx2 = l2;
    ListNode *sum_list = new ListNode(0);
    ListNode *idx3 = sum_list;

    while (idx1 != NULL && idx2 != NULL) {
      int sum = sum_list->val + idx1->val + idx2->val;

      int carry = sum / 10;
      sum %= 10;
      sum_list->val = sum;
      if (idx1->next != NULL || idx2->next != NULL)
        sum_list->next = new ListNode(carry);
      else {
        if (carry) {
          sum_list->next = new ListNode(carry);
        }
      }

      idx1 = idx1->next;
      idx2 = idx2->next;
      sum_list = sum_list->next;
    }
    while (idx1 != NULL) {

      int sum = sum_list->val + idx1->val;
      int carry = sum / 10;
      sum %= 10;
     sum_list->val = sum;
      if (idx1->next != NULL) {
        sum_list->next = new ListNode(carry);

      } else {
        if (carry) {
          sum_list->next = new ListNode(carry);
        }
      }
      idx1 = idx1->next;
      sum_list = sum_list->next;
    }
    while (idx2 != NULL) {

      int sum = sum_list->val + idx2->val;
      int carry = sum / 10;
      sum %= 10;
        sum_list -> val = sum;
      if (idx2->next != NULL)
        sum_list->next = new ListNode(carry);
      else {
        if (carry) {
          sum_list->next = new ListNode(carry);
        }
      }
      idx2 = idx2->next;
      sum_list = sum_list->next;
    }

    return idx3;
  }
};
// int main() {

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

// int n;
// cin >> n;
// vector<vector<int>> v;
// for (int i = 0; i < n; i++) {
//   vector<int> temp;
//   for (int j = 0; j < n; j++) {
//     ll x;
//     cin >> x;
//     temp.push_back(x);
//   }
//   v.push_back(temp);
// }
// Solution sol;
// sol.setZeroes(v);
// }
