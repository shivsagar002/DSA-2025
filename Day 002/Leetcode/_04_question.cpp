// Complement of Base 10 Integer
// Problem Link: https://leetcode.com/problems/complement-of-base-10-integer/description/
class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0, n2=n;
        if(n==0) return 1;
        while(n2){
            mask = (mask<<1) | 1;
            n2= n2>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};