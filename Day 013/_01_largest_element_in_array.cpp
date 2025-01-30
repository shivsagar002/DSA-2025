// Problem Link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int ans = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            ans = max(arr[i], ans);
        }
        return ans;
    }
};