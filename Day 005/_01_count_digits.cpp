// Problem Link: https://www.geeksforgeeks.org/problems/count-digits5716/1

int evenlyDivides(int n) {
        // code here
        int x=n, ans=0;
        while(x){
            int digit = x%10;
            x/=10;
            if(digit==0) continue;
            if(n%digit==0) ans++;
        }
        return ans;
    }