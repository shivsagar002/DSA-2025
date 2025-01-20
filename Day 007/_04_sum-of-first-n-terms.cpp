// Problem Link: https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

class Solution {
  public:
    
    int helper(int num, int n, int sum){
        sum += pow(num,3);
        num++;
        if(num<=n){
            sum = helper(num, n, sum);
        }
        return sum;
    }
    
    int sumOfSeries(int n) {
        // code here
        int sum = 0, num = 1;
        return helper(num, n, sum);
        
    }
};