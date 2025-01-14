// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        int cnt = 1;
        for(int j=1; j<=n*2; j++){
            if(j<=n-i)cout<<cnt++<<" ";
            else if(j>n-i+(2*i)) cout<<--cnt<<" ";
            else cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    printPattern(n);
    return 0;
}