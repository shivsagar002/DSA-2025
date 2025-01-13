// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i+j<<" ";
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