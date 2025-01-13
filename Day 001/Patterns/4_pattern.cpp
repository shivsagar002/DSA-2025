// 123
// 456
// 789
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    int x=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<x<<" ";
            x++;
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