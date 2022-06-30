/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */

var getPermutation = function (n, k) {
  let perm = [];
  let ans = [];
  let factorials = [1];

  for (let i = 1; i <= n; i++) factorials[i] = factorials[i - 1] * i;

  for (let i = 1; i <= n; i++) {
    perm.push(i);
  }
  for (let i = 1; i < n; i++) {
    let curIdx = Math.ceil(k / factorials[perm.length - 1]);

    // k %= factorials[perm.length - 1];
    k -= (curIdx - 1) * factorials[perm.length - 1];
    ans.push(perm[curIdx - 1]);
    perm = [];
    for (let j = 1; j <= n; j++) if (ans.indexOf(j) == -1) perm.push(j);
  }
  for (let i = 1; i <= n; i++) if (ans.indexOf(i) == -1) ans.push(i);
  let _ans = "";
  for (let i = 0; i < ans.length; i++) _ans += ans[i];
  return _ans;
};

// console.log(getPermutation(3, 2));
