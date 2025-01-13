#include <bits/stdc++.h>
using namespace std;

int main(){
    float feh,cel;
    cout<<"Enter Fahrenheit: "<<endl;
    cin>>feh;
    cel = ((feh-32)*5)/9;
    cout<<"Celsius value of "<<feh<<" Fahrenheit is: "<<cel<<endl;
    return 0;
}