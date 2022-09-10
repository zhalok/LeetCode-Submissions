/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  const max_val = Math.pow(2, 31);
  const arr = [];
  let _x = x;
  x = Math.abs(x);
  while (x) {
    arr.push(x % 10);
    x = Math.floor(x / 10);
  }

  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum *= 10;
    sum += arr[i];
    i;
    if ((sum >= max_val && _x >= 0) || (sum > max_val && _x < 0)) {
      return 0;
    }
  }
  if (_x < 0) sum *= -1;
  return sum;
};

const ans = reverse(1534236469);
console.log(ans);
