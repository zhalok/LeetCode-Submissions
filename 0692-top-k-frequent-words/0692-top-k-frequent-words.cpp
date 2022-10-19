#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <queue>
#include <vector>
#define inf 100000
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
  vector<string> topKFrequent(vector<string> &words, int k) {
    vector<pair<int, string>> temp;
    set<string> st;
    map<string, int> counter;
    for (int i = 0; i < words.size(); i++) {
      counter[words[i]]++;
      st.insert(words[i]);
    }
    for (auto x : st) {
      temp.push_back({-counter[x], x});
    }
    sort(temp.begin(), temp.end());
    // reverse(temp.begin(), temp.end());
    vector<string> ans;
    for (int i = 0; i < temp.size() && i < k; i++)
      ans.push_back(temp[i].second);
    // sort(ans.begin(), ans.end());
    return ans;
  }
};

// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   vector<string> s;
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++) {
//     string ts;
//     cin >> ts;
//     s.push_back(ts);
//   }
//   Solution sol;
//   vector<string> ans;
//   int k;
//   cin >> k;
//   ans = sol.topKFrequent(s, k);
//   for (auto x : ans)
//     cout << x << " ";
//   cout << endl;
// }