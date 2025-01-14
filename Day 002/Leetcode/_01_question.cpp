// Subtract the Product and Sum of Digits of an Integer
// Problem Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1, sum=0;
        while(n){
            int digit = n%10;
            sum += digit;
            pro *= digit;
            n /= 10;
        }
        return pro-sum;
    }
};