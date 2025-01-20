#include <bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
    
    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    stack<int> s1,s2;
    s1.swap(s2);

    //all operations are taking O(n) time
    return 0;
}