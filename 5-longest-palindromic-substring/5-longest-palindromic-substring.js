/**
 * @param {string} s
 * @return {string}
 */
let check_for_even = (s) => {
  let ans = 0;
  for (let i = 1; i < s.length; i++) {
    let p = i - 1;
    let q = i;
    let temp_ans = 0;
    while (p >= 0 && q < s.length && s[p] == s[q]) {
      ans = Math.max(ans, q - p + 1);
      p--;
      q++;
    }
  }
  return ans;
};
let check_for_odd = (s) => {
  let ans = 0;
  for (let i = 1; i < s.length; i++) {
    let p = i;
    let q = i;

    while (p >= 0 && q < s.length && s[p] == s[q]) {
      ans = Math.max(ans, q - p + 1);
      p--;
      q++;
    }
  }
  return ans;
};

var check_palindrome = (s) => {
  let i = 0;
  let j = s.length - 1;
  while (i <= j) {
    if (s[i] != s[j]) return false;
    i++;
    j--;
  }
  return true;
};

var longestPalindrome = function (s) {
  if (s.length <= 1) return s;
  let odd_len = check_for_odd(s);
  let even_len = check_for_even(s);
  let len = Math.max(odd_len, even_len);
  let i = 0;
  let j = len - 1;
  while (j < s.length) {
    let _s = "";
    for (let k = i; k <= j; k++) {
      _s += s[k];
    }

    if (check_palindrome(_s) == true) return _s;

    i++;
    j++;
  }
  return "";
};


