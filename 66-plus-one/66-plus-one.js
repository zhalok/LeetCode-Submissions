/**
 * @param {number[]} digits
 * @return {number[]}
 */
 var plusOne = function(digits) {
   digits.reverse();
   let carry=0;
   let sum = 0;
   sum = (digits[0]+1)%10;
   carry = Math.floor((digits[0]+1)/10);
   digits[0] = sum;
   for(let i=1;i<digits.length;i++)
   {
    sum = (carry + digits[i])%10;
    carry = Math.floor((carry + digits[i])/10);
    digits[i]=sum;
   }
   if(carry)
   digits.push(carry);
   digits.reverse();
   return digits;
};

// console.log(plusOne([9,9,9]));