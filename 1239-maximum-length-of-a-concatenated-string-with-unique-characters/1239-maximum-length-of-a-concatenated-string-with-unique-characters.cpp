#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <queue>
#include <string>
#include <vector>
#define inf 100000
#define all(v) v.begin(), v.end()
using namespace std;

// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// void ListIterator(ListNode *node) {
//   while (node != NULL) {
//     cout << node->val << " ";
//     node = node->next;
//   }
// }

class Solution {
public:
  vector<string> vv;
  vector<string> _arr;
  int ans;
  int size = 0;
  int maxx(int a, int b) { return a > b ? a : b; }
  void func(int idx) {
    if (idx == _arr.size()) {
      string ss;
      for (int i = 0; i < vv.size(); i++) {
        ss += vv[i];
      }
      set<char> st;
      if (ss.size() <= 26) {
        for (int i = 0; i < ss.size(); i++)
          st.insert(ss[i]);
        if (st.size() == ss.size()) {
          ans = maxx(ans, st.size());
        }
      }
      return;
    }
    if (size <= 26) {
      vv.push_back(_arr[idx]);
      size += _arr[idx].size();
      func(idx + 1);
      size -= _arr[idx].size();
      vv.pop_back();
      func(idx + 1);
    } else
      func(idx + 1);
  }
  int maxLength(vector<string> &arr) {
    ans = 0;
    for (auto x : arr)
      _arr.push_back(x);
    func(0);
    return ans;
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
//   vector<int> ans = sol.findErrorNums(v);
//   for (auto x : ans)
//     cout << x << " ";
//   cout << endl;
// }