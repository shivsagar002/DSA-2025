#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    (is_prime(n))?cout<<"Your number is prime.":cout<<"Your number is composite";
    cout<<endl;
    return 0;
}