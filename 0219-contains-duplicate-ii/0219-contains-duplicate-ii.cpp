#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
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
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    map<int, int> idx;
    for (int i = 0; i < nums.size(); i++) {
      if (idx[nums[i]] && ((i + 1) - idx[nums[i]] <= k))
        return true;
      idx[nums[i]] = i + 1;
    }
    return false;
  }
};

// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n;
//   cin >> n;
//   vector<int> nums;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     nums.push_back(x);
//   }
//   int k;
//   cin >> k;
//   Solution sol;
//   bool ans = sol.containsNearbyDuplicate(nums, k);
//   cout << ans << endl;
// }