// Number of 1 Bits
// Problem link: https://leetcode.com/problems/number-of-1-bits/description/
class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;
        while(n){
            if(n&1) ans++;
            n = n>>1;
        }
        return ans;
    }
};