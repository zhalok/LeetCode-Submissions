/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */

var getPermutation = function (n, k) {
  let perm = [];
  let ans = "";
  let factorials = [1];

  for (let i = 1; i <= n; i++) factorials[i] = factorials[i - 1] * i;

  for (let i = 1; i <= n; i++) {
    perm.push(i);
  }

  for (let i = 1; i <= n; i++) {
    let curIdx = Math.ceil(k / factorials[perm.length - 1]);
    k -= (curIdx - 1) * factorials[perm.length - 1];
    ans += perm[curIdx - 1].toString();
    perm.splice(curIdx - 1, 1);
  }
  return ans;
};

// console.log(getPermutation(3, 2));
