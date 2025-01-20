// Palindrome Number
// Problem Link: https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int reverse = 0, num=x;
        while(num){
            int digit = num%10;
            if(reverse>INT_MAX/10) return 0;
            reverse = (reverse*10)+digit;
            num /= 10;
        }
        if(reverse == x) return 1;
        return 0;
    }
};