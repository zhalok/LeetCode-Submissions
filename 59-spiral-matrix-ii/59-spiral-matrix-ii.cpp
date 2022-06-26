#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
using namespace std;
#define zhalok Zhalok
#define inf INT_MAX
#define ll long long int
#define ull unsigned long long
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define negloop(i, a, b) for (ll i = a; i >= b; i--)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define pb push_back
#define be begin()
#define en end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second
#define MOD 1000000007
#define sz 10001
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(), v.end()
#define eps 1e-8
#define pi acos(-1.0)

int move_y[4] = {1, 0, -1, 0};
int move_x[4] = {0, 1, 0, -1};
bool visited[21][21];
int grid[21][21];

bool check(int r, int c, int rows, int cols) {
  if (r >= 0 && r < rows && c >= 0 && c < cols && visited[r][c] == false)
    return true;
  return false;
}

void fill_grid(int i, int j, int val, int row, int col, string direction) {
  visited[i][j] = true;
  grid[i][j] = val;
  if (direction == "right") {
    int new_r = i;
    int new_c = j + 1;
    if (check(new_r, new_c, row, col))
      fill_grid(new_r, new_c, val + 1, row, col, "right");
    else {
      int new_r = i + 1;
      int new_c = j;
      if (check(new_r, new_c, row, col))
        fill_grid(new_r, new_c, val + 1, row, col, "down");
    }
  }
  if (direction == "down") {
    int new_r = i + 1;
    int new_c = j;
    if (check(new_r, new_c, row, col))
      fill_grid(new_r, new_c, val + 1, row, col, "down");
    else {
      int new_r = i;
      int new_c = j - 1;
      if (check(new_r, new_c, row, col))
        fill_grid(new_r, new_c, val + 1, row, col, "left");
    }
  }
  if (direction == "left") {
    int new_r = i;
    int new_c = j - 1;
    if (check(new_r, new_c, row, col))
      fill_grid(new_r, new_c, val + 1, row, col, "left");
    else {
      int new_r = i - 1;
      int new_c = j;
      if (check(new_r, new_c, row, col))
        fill_grid(new_r, new_c, val + 1, row, col, "up");
    }
  }
  if (direction == "up") {
    int new_r = i - 1;
    int new_c = j;
    if (check(new_r, new_c, row, col))
      fill_grid(new_r, new_c, val + 1, row, col, "up");
    else {
      int new_r = i;
      int new_c = j + 1;
      if (check(new_r, new_c, row, col))
        fill_grid(new_r, new_c, val + 1, row, col, "right");
    }
  }
}
class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> v;
    memset(visited, false, sizeof visited);
    memset(grid, 0, sizeof grid);
    fill_grid(0, 0, 1, n, n, "right");
    // cout << visited[2][0] << endl;
    for (int i = 0; i < n; i++) {
      vector<int> temp;
      for (int j = 0; j < n; j++)
        temp.push_back(grid[i][j]);

      v.push_back(temp);

      // cout << endl;
    }

    return v;
  }
};

// int main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

//   int n;
//   cin >> n;
//   Solution s;
//   vector<vector<int>> v = s.generateMatrix(n);
//   for (auto x : v) {
//     for (auto y : x)
//       cout << y << " ";
//     cout << endl;
//   }
// }
