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

// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
class Solution {
public:
  bool isPalindrome(ListNode *head) {
    ListNode *cur = head;
    ListNode *head1 = new ListNode();
    ListNode *cur1 = head1;

    while (cur != NULL) {
      cur1->val = cur->val;
      if (cur->next != NULL)
        cur1->next = new ListNode();
      else
        cur1->next = NULL;
      cur1 = cur1->next;
      cur = cur->next;
    }
    ListNode *prev_cur1;
    ListNode *next_cur1;
    cur1 = head1;
    prev_cur1 = NULL;
    next_cur1 = cur1->next;
    ListNode *new_header;
    while (next_cur1 != NULL) {
      ListNode *temp = next_cur1->next;
      cur1->next = prev_cur1;
      next_cur1->next = cur1;
      prev_cur1 = cur1;
      cur1 = next_cur1;
      next_cur1 = temp;
      new_header = cur1;
    }
    cur1 = new_header;
    cur = head;
    while (cur1 != NULL) {
      if (cur->val != cur1->val)
        return false;
      cur = cur->next;
      cur1 = cur1->next;
    }

    return true;
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
