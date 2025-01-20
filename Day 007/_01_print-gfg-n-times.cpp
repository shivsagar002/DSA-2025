// Problem Link: https://www.geeksforgeeks.org/problems/print-gfg-n-times/1

class Solution {
  public:
    
    void prnt(int num, int n){
        cout<<"GFG ";
        if(num==n){
            return;
        }
        num++;
        prnt(num, n);
    }
    
    void printGfg(int N) {
        // Code here
        int num = 1;
        prnt(num, N);
    }
};