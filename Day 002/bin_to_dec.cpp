#include <bits/stdc++.h>
using namespace std;

int bin_to_dec(string bin){
    int len = bin.size()-1;
    int mul = 1, ans=0;
    for(int i=len; i>=0; i--){
        if(bin[i]=='1'){
            ans += mul;
        }
        mul *= 2;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter binary form of a num in 0s and 1s: "<<endl;
    cin>>n;
    int dec = bin_to_dec(n);
    cout<<"Your number is "<<dec<<endl;
    return 0;
}