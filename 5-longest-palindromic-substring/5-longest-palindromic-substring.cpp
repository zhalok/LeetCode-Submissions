#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
int find_odd(string s) {
  s = '*' + s + '+';
  int idx[s.size() + 2];
  memset(idx, 0, sizeof(idx));
  for (int i = 1; i < s.size() - 1; i++) {
    while (s[i + idx[i]] == s[i - idx[i]])
      idx[i]++;
  }
  int mx = 0;
  for (int i = 1; i < s.size() - 1; i++)
    mx = max(mx, 2 * (idx[i] - 1) + 1);
  return mx;
}

int find_even(string s) {
  s = '*' + s + '+';
  int idx[s.size() + 2];
  memset(idx, 0, sizeof(idx));
  for (int i = 1; i < s.size() - 1; i++) {
    while (s[i + idx[i] + 1] == s[i - idx[i]])
      idx[i]++;
  }
  int mx = 0;
  for (int i = 1; i < s.size() - 1; i++)
    mx = max(mx, 2 * (idx[i]));
  return mx;
}

bool check_palindrome(string s) {
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

class Solution {
public:
  string longestPalindrome(string s) {
    int ans = max(find_even(s), find_odd(s));
    int i = 0;
    int j = ans - 1;
    bool flag = true;
    while (j < s.size()) {
      string _s = "";
      for (int k = i; k <= j; k++)
        _s += s[k];
      if (check_palindrome(_s))
        return _s;
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