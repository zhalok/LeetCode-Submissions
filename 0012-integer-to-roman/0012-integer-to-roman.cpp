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
  string intToRoman(int num) {
    map<int, string> int_to_roman;
    int_to_roman[1] = "I";
    int_to_roman[4] = "IV";
    int_to_roman[5] = "V";
    int_to_roman[9] = "IX";
    int_to_roman[10] = "X";
    int_to_roman[40] = "XL";
    int_to_roman[50] = "L";
    int_to_roman[90] = "XC";
    int_to_roman[100] = "C";
    int_to_roman[400] = "CD";
    int_to_roman[500] = "D";
    int_to_roman[900] = "CM";
    int_to_roman[1000] = "M";
    vector<int> vals;
    int init = 1;
    int idx = 1;
    int pw = 1;
    for (auto x : int_to_roman) {
      vals.push_back(x.first);
    }

    string ans;
    // sort(vals.begin(), vals.end());
    reverse(vals.begin(), vals.end());
    while (num) {
      // for (auto x : int_to_roman) {
      //   if (x.first <= num) {
      //     num -= x.first;
      //     ans += x.second;
      //   }
      // }
      for (int i = 0; i < vals.size(); i++) {
        if (vals[i] <= num) {
          num -= vals[i];
          ans += int_to_roman[vals[i]];
          break;
        }
      }
    }
    return ans;
  }
};

// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int num;
//   cin >> num;
//   Solution sol;
//   cout << sol.intToRoman(num) << endl;
// }