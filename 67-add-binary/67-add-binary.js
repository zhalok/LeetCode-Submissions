/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
  a = a.split("").reverse().join("");
  b = b.split("").reverse().join("");
  let ans = "";
  let sum = 0;
  let carry = 0;
  for (let i = 0; i < Math.max(a.length, b.length); i++) {
    let _a = a[i] ? parseInt(a[i]) : 0;
    let _b = b[i] ? parseInt(b[i]) : 0;
    // console.log(_a, _b);
    sum = (_a + _b + carry) % 2;
    carry = Math.floor((_a + _b + carry) / 2);
    ans += sum.toString();
  }
  if (carry) ans += "1";
  ans = ans.split("").reverse().join("");
  return ans;
};

let a = "11";
let b = "1";
console.log(addBinary(a, b));
