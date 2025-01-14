//    1
//   121
//  12321
// 1234321
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        int cnt=0;
        for(int j=0; j<n+i-1; j++){
            if(i+j<n) cout<<"  ";
            else if(i+j>=n && j<n) cout<<++cnt<<" ";
            else cout<<--cnt<<" ";
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