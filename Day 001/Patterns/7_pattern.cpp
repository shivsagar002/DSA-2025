// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<cnt<<" ";
            cnt++;
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