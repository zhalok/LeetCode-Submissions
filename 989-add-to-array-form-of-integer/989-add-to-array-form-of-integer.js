/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */
var addToArrayForm = function (num, k) {
  num.reverse();
  let num1 = [];
  while (k) {
    num1.push(k % 10);
    k = Math.floor(k / 10);
  }

  let sum = 0;
  let carry = 0;
  let ans = [];
  for (let i = 0; i <= Math.max(num.length, num1.length); i++) {
    let firstDigit = num[i] ? num[i] : 0;
    let secondDigit = num1[i] ? num1[i] : 0;
    sum = (firstDigit + secondDigit + carry) % 10;
    carry = Math.floor((firstDigit + secondDigit + carry) / 10);
    ans[i] = sum;
  }
  if (ans[ans.length - 1] == 0) ans.pop();
  ans.reverse();
  return ans;
};
const arr = [9, 9, 9, 9, 9, 9, 9, 9, 9, 9];
let k = 1;

console.log(addToArrayForm(arr, k));
