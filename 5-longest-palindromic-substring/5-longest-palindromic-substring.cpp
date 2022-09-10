#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i <= j) {
      if (s[i] != s[j])
        return false;
      i++;
      j--;
    }
    return true;
  }
  string longestPalindrome(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
      int j = i;
      int k = i;

      while (j >= 0 and k < s.size() and s[j] == s[k]) {
        ans = max(ans, (k - j + 1));
        k++;
        j--;
      }
    }
    for (int i = 0; i < s.size(); i++) {
      int j = i - 1;
      int k = i;
      while (j >= 0 and k < s.size() and s[j] == s[k]) {
        ans = max(ans, (k - j + 1));
        j--;
        k++;
      }
    }
    string _ans;
    int i = 0;
    int j = ans - 1;
    while (j < s.size()) {
      string temp_ans;
      for (int k = i; k <= j; k++)
        temp_ans += s[k];
      if (isPalindrome(temp_ans))
        return temp_ans;
      i++;
      j++;
    }
    return "";
  }
};

// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   string s;
//   cin >> s;
//   int ans = max(find_even(s), find_odd(s));
//   cout << ans << endl;
// }