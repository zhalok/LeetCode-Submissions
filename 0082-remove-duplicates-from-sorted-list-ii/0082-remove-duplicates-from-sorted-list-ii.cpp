#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <iostream>
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

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    ListNode *sentinelHead = new ListNode();
    // cout << sentinelHead->val << endl;
    sentinelHead->next = head;
    // cout << sentinelHead->next->val << endl;

    ListNode *cur = sentinelHead;
    while (1) {
      if (cur == NULL)
        break;
      while (cur->next != NULL && cur->next->next != NULL &&
             cur->next->val == cur->next->next->val) {
        ListNode *temp = cur->next;
        while (temp->next != NULL && temp->val == temp->next->val)
          temp = temp->next;
        cur->next = temp->next;
      }
      cur = cur->next;
    }
    return sentinelHead->next;
  }
};

void ListIterator(ListNode *node) {
  while (node != NULL) {
    cout << node->val << " ";
    node = node->next;
  }
}

// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n;
//   cin >> n;
//   ListNode *head = new ListNode();
//   ListNode *cur = head;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     cur->val = x;
//     if (i < n - 1) {
//       cur->next = new ListNode();
//       cur = cur->next;
//     }
//   }
//   ListNode *sentinelHead = new ListNode();
//   sentinelHead->next = head;
//   // ListIterator(sentinelHead);
//   Solution sol;
//   ListNode *ans_head = sol.deleteDuplicates(head);
//   ListIterator(ans_head);
// }