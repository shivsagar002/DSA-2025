#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(int dec){
    string bin = "";
    for(int i=0; i<32; i++){
        if(dec & 1) bin = '1'+bin;
        else bin = '0'+bin;
        dec = dec>>1;
    }
    return bin;
}

string twos_comp(string bin){
    bool clock = 0;
    for(int i=31; i>=0; i--){
        if(clock) bin[i] = ~bin[i];
        if(bin[i]=='1') clock = 1;
    }
    return bin;
}

string FN_dec_to_bin(int n){
    string bin = dec_to_bin(n);
    if(n>=0){
        return bin;
    }
    else{
        return twos_comp(bin);
    }
}

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Binary form of "<<n<<" is: "<<dec_to_bin(n);
    return 0;
}