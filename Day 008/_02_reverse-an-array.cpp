// Problem Link: https://www.geeksforgeeks.org/problems/reverse-an-array/0

class Solution {
  public:
  
    void change(int s, int e, vector<int> &arr){
        swap(arr[s++], arr[e--]);
        if(s<=e) change(s, e, arr);
    }
  
    void reverseArray(vector<int> &arr) {
        // code here
        int start = 0, end = arr.size()-1;
        change(start, end, arr);
    }
};