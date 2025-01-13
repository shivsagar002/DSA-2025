// 1234
// 1234
// 1234
// 1234
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
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