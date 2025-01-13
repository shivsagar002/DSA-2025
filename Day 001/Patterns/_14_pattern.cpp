// A
// B C
// D E F
// G H I J
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    printPattern(n);
    return 0;
}