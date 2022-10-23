#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <queue>
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
  vector<int> findErrorNums(vector<int> &nums) {
    // sort(all(nums));
    int sz = nums.size();
    int counter[nums.size() + 1];
    memset(counter, 0, sizeof counter);
    for (int i = 0; i < nums.size(); i++)
      counter[nums[i]]++;
    // for (int i = 1; i <= nums.size(); i++)
    //   cout << counter[i] << " ";
    // cout << endl;
    vector<int> v;
    for (int i = 1; i <= nums.size(); i++)
      if (counter[i] == 2)
        v.push_back(i);
    for (int i = 1; i <= nums.size(); i++)
      if (counter[i] == 0)
        v.push_back(i);
    return v;
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