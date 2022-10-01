#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  bool check_boundary(int x, int y, int n, int m) {
    if (x >= 0 && x < n && y >= 0 && y < m)
      return true;
    else
      return false;
  }
  bool visited[10][10];
  int x_moves[10] = {1, -1, 0, 0};
  int y_moves[10] = {0, 0, 1, -1};
  bool ans = false;
  void dfs(int idx, int x, int y, vector<vector<char>> &board, string &word) {
    visited[x][y] = true;
    if (idx == word.size() - 1) {
      ans = true;
      return;
    }
    for (int i = 0; i < 4; i++) {
      int _x = x + x_moves[i];
      int _y = y + y_moves[i];
      if (check_boundary(_x, _y, board.size(), board[0].size()) &&
          word[idx + 1] == board[_x][_y] && visited[_x][_y] == false) {
        dfs(idx + 1, _x, _y, board, word);
      }
    }
    visited[x][y] = false;
  }
  bool exist(vector<vector<char>> &board, string word) {
    ans = false;
    for (int i = 0; i < board.size(); i++)
      for (int j = 0; j < board[i].size(); j++)
        if (board[i][j] == word[0]) {
          // memset(visited, false, sizeof(visited));
          dfs(0, i, j, board, word);
        }
    return ans;
  }
};
// int main() {
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   int n, k;
//   cin >> n >> k;
//   Solution sol;
//   vector<vector<int>> v = sol.combine(n, k);
//   for (auto x : v) {
//     for (auto y : x)
//       cout << y << " ";
//     cout << endl;
//   }
// }