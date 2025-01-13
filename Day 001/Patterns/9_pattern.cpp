// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i-j<<" ";
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