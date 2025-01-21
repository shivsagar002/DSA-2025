#include <bits/stdc++.h>
using namespace std;

int calc_sum(int n){
    if(n==1) return n;
    return n + calc_sum(n-1);
}

int main(){
    
    int n;
    cout<<"Enter N: "<<endl;
    cin>>n;
    int sum = calc_sum(n);
    cout<<"Sum of first "<<n<<" numbers are: "<<sum<<endl;
    return 0;
}