#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <string>
#include <valarray>
#include <vector>
#define inf 100000
using namespace std;

// struct TreeNode {
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode() : val(0), left(nullptr), right(nullptr) {}
//   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//   TreeNode(int x, TreeNode *left, TreeNode *right)
//       : val(x), left(left), right(right) {}
// };

class Solution {
public:
  vector<int> v;
  void dfs(TreeNode *curNode) {
    v.push_back(curNode->val);
    if (curNode->right != NULL)
      dfs(curNode->right);
    if (curNode->left != NULL)
      dfs(curNode->left);
  }
  bool findTarget(TreeNode *root, int k) {
    v.clear();
    dfs(root);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
      for (int j = i + 1; j < v.size(); j++)
        if (v[i] + v[j] == k)
          return true;
    return false;
  }
};

// int main() {
//   // freopen("input.txt", "r", stdin);
//   // freopen("output.txt", "w", stdout);
//   vector<int> v;
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
//   int target;
//   cin >> target;
//   Solution sol;
//   time_t start, end;
//   time(&start);
//   cout << sol.threeSumClosest(v, target) << endl;
//   time(&end);
//   double time_taken = double(end - start);
//   cout << "Time taken by program is : " << fixed << time_taken
//        << setprecision(5);
//   cout << " sec " << endl;
// }