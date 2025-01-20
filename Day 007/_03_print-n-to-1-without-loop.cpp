// Problem Link: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1

class Solution {
  public:
    void printNos(int N) {
        // code here
        cout<<N<<" ";
        N--;
        if(N==0) return;
        printNos(N);
    }
};