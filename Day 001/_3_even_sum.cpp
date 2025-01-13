#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0, temp;
    cout<<"Enter N"<<endl;
    cin>>n;
    temp = n;
    while(n){
        if(n%2==0) sum += n;
        n--;
    }
    cout<<"Sum of even numbers from 1 to "<<temp<<" is: "<<sum<<endl;
    return 0;
}