//     *
//    **
//   ***
//  ****
// *****
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(i+j<n) cout<<"  ";
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