// LCM And GCD
// Problem link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

vector<int> lcmAndGcd(int a, int b) {
        // code here
        int x = a, y = b;
        while(y){
            int rem = x%y;
            x = y;
            y = rem;
        }
        int gcd = x;
        int lcm = (a*b)/gcd;
        
        return {lcm,gcd};
    }