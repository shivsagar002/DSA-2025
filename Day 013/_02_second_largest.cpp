// Problem link: https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int ans = -1, maxi = -1;
        for(int i=0; i<arr.size(); i++){
            maxi = max(maxi, arr[i]);
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<maxi){
                ans = max(ans,arr[i]);
            }
        }
        return ans;
        
    }
};