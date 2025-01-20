// Armstrong Numbers
// Program link: http://geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int x = n, num=0;
        while(x){
            int digit = x%10;
            num += pow(digit,3);
            x /= 10;
        }
        if(num==n) return 1;
        return 0;
    }
};