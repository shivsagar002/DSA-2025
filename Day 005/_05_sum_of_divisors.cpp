// Sum 1 to n Divisors
// Problem Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

class Solution {
    
  public:
    int helper(int n){
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(n%i==0) ans += i;
        }
        return ans;
    }
    int sumOfDivisors(int n) {
        // Write Your Code here
        int sum = 0;
        
        for(int i=1; i<=n; i++){
            sum += helper(i);
        }
        
        return sum;
    }
};