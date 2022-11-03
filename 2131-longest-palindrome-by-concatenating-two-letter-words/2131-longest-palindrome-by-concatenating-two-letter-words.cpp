class Solution {
public:
  int longestPalindrome(vector<string> &words) {
    map<string, int> counter;
    int ans = 0;
    for (int i = 0; i < words.size(); i++) {
      if (counter.size() == 0)
        counter[words[i]]++;
      else {
        string temp = words[i];
        reverse(temp.begin(), temp.end());
        if (counter[temp]) {
          ans += 4;
          counter[temp]--;
        } else
          counter[words[i]]++;
      }
    }

    for (int i = 0; i < words.size(); i++)
      if (counter[words[i]] && words[i][0] == words[i][1]) {
        ans += 2;
        break;
      }
    return ans;
  }
};
