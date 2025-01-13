// A A A
// B B B
// C C C
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    printPattern(n);
    return 0;
}