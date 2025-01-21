// Problem Link: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1

class Solution {
  public:
    // Complete this function
    void prnt(int num, int n){
        if(num<=n){
            cout<<num<<" ";
            num++;
            prnt(num,n);
        } 
    }
    void printNos(int n) {
        // Your code here
        int num = 1;
        prnt(num,n);
    }
};