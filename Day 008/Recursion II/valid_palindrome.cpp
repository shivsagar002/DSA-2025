#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int e, int b)
{
    if (b > e)
        return 1;
    if (s[b++] != s[e--])
        return 0;
    return check_palindrome(s, e, b);
}

int main()
{
    string s;
    cout << "Enter String: " << endl;
    cin >> s;
    if (check_palindrome(s, s.size() - 1, 0))
        cout << "Your string is valid palindrome" << endl;
    else
        cout << "Your string is not valid palindrome" << endl;
    return 0;
}