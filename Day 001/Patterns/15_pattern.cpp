// A
// B C 
// C D E 
// D E F G
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        char ch = 'A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            ch++;
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