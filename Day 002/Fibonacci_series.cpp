#include <bits/stdc++.h>
using namespace std;

void print_Fibonacci(int n){
    int n1=0, n2=1, n3;
    n -= 2;
    cout<<n1<<" "<<n2<<" ";
    while(n){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        n--;
    }
}

int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    cout<<"First "<<n<<" numbers of Fibonacci series is: ";
    print_Fibonacci(n);
    return 0;
}