class Solution {
public:
  string vowels = "aeiouAEIOU";
  string reverseVowels(string s) {
    string temp;

    for (int i = 0; i < s.size(); i++)
      for (int j = 0; j < vowels.size(); j++)
        if (s[i] == vowels[j]) {
          temp += s[i];
          break;
        }
    // reverse(temp.begin(),temp.end());
    for (int i = 0; i < s.size(); i++)
      for (int j = 0; j < vowels.size(); j++)
        if (s[i] == vowels[j]) {
          s[i] = temp.back();
          temp.pop_back();
          break;
        }
    return s;
  }
};