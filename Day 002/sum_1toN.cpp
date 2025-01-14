#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter N: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        sum += i;
    cout << "Sum of first N positive number is " << sum << endl;
    return 0;
}