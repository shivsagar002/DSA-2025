// Problem Link: https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0

class Solution {
  public:
  
    vector<long long> helper(vector<long long> ans, long long n, long long fact, long long num){
        num++;
        fact *= num;
        if(fact <= n){
            ans.push_back(fact);
            return helper(ans, n, fact, num);
        }
        
        return ans;
    }
  
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> ans;
        long long fact = 1, num=0;
        
        ans = helper(ans, n, fact, num);
        
        return ans;
    }
};