// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number}
//  */

const sort_func = (nums) => {
  // console.log(nums);
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++)
      if (nums[i] > nums[j]) {
        let temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
  }
  return nums;
};

const isSorted = (nums) => {
  for (let i = 0; i < nums.length - 1; i++)
    if (nums[i] > nums[i + 1]) return false;
  return true;
};

var threeSumClosest = function (nums, target) {
  nums = sort_func(nums);

  let ans = -100000;
  let gap = 100000;
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      let lo = j + 1;
      let hi = nums.length - 1;
      while (lo <= hi) {
        let mid = Math.floor((lo + hi) / 2);
        let temp = nums[i] + nums[j] + nums[mid];
        if (Math.abs(temp - target) <= gap) {
          gap = Math.abs(temp - target);
          ans = temp;
        }
        if (temp <= target) lo = mid + 1;
        else hi = mid - 1;
      }
    }
  }
  return ans;
};

let nums = [
  -213, -259, 263, 540, -632, -401, 257, 673, 29, -737, -478, -193, -90, 651,
  620, 353, 232, -358, -588, 233, -946, -231, 422, 239, 143, 648, -994, 603,
  509, 361, -122, -295, -671, 472, -982, -483, -533, -28, -403, 869, 499, -736,
  559, 245, -148, 970, 50, 944, 857, 939, 737, 911, -577, 142, -20, 109, 719,
  -377, 586, 201, 160, -141, 323, 183, 665, 839, -127, -979, -668, 368, 744,
  575, -452, -487, -649, -321, 546, 371, -665, -83, 580, 487, -883, 421, -456,
  -907, 111, 779, 633, -146, 929, 55, 950, 866, -941, -881, -606, 528, -708,
  -991, 910, 579, -419, -270, -317, -40, -192, 300, -760, -119, 897, -536, 25,
  -57, -831, -52, -315, -913, -212, 738, 167, -319, -652, -115, 221, -764, -349,
  680, -31, -617, 924, 868, 397, -421, 789, -35, 590, 536, -763, 282, -229, 302,
  -990, -467, -230, 974, 464, -835, -21, 116, 975, 79, -792, -187, -765, 380,
  -529, -339, 609, 676, -910, -275, 780, 311, -598, 38, 681, -418, 995, -904,
  -108, -381, -877, -570, 847, -780, 639, 383, 443, -842, 592, -858, -811, 440,
  296, -527, -905, -485, 490, -523, -987, 567, 647, 482, 965, -638, 359, -535,
  449, 358, 36, 810, -223, -906, 999, -1000, -969, 878, 853, -359, -544, 865,
  -664, -919, -681, 15, -673, 448, -109, 98, 428, -25, -841, 616, -14, -43,
  -768, 372, 406, -372, 972, 396, -214, -336, 106, -209, 340, 258, 877, 800,
  -137, -738, 149, -887, -962, -872, -689, 501, -462, 45, -518, -107, -388,
  -534, 945, -202, -687, -468, 303, 921, 312, -567, -188, 876, 542, 606, 988,
  107, 533, 387, -210, 410, -986, 327, 888, -722, -375, 252, 785, -563, -37,
  -955, -333, -810, 486, 278, -180, -876, -350, 566, 454, 289, 548, -240, -729,
  320, -622, 178, -113, 883, -168, 173, -934, -493, 788, 736, 572, 331, -725,
  463, -677, 394, 194, 671, -574, -761, 823, 309, 684, -509, 458, -140, 273,
  -825, 519, 119, -956, 419, 774, -837, -151, 858, 882, 893, 209, -801, 666,
  -476, 157, 41, 556, -238, -164, -402, -499, -447, -556, -44, 313, -482, -449,
  412, -849, 758, 465, -264, -582, -853, -846, 456, -280, -601, -819, 756, -957,
  919, 466, 415, 238, -6, 732, 373, 105, -850, -135, -783, -555, -128, -144,
  -609, -470, 128, -248, -659, -971, 148, -775, -139, -788, -585, -36, 695, 442,
];

target = -5443;
console.log(threeSumClosest(nums, target));