#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
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
  string breakPalindrome(string palindrome) {
    if (palindrome.size() == 1)
      return "";
    int limit = palindrome.size() / 2;

    for (int i = 0; i < limit; i++)
      if (palindrome[i] != 'a') {
        palindrome[i] = 'a';
        return palindrome;
      }
    palindrome[palindrome.size()-1] = 'b';
    return palindrome;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   string s;
//   cin >> s;
//   Solution sol;
//   cout << sol.breakPalindrome(s) << endl;
// }