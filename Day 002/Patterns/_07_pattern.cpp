//    1
//   23
//  456
// 78910
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    int cnt=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(i+j<n) cout<<"  ";
            else cout<<cnt++<<" ";
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