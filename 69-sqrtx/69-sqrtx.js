/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  let lo = 0;
  let hi = x;
  let ans;
  while (lo <= hi) {
    let mid = Math.floor((lo + hi) / 2);
    if (mid * mid <= x) {
      ans = mid;
      lo = mid + 1;
    } else hi = mid - 1;
  }
  return ans;
};


