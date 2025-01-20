#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //implemented by double linked list
    list<int> l;
    l.push_back(5);
    l.emplace_back(7);

    l.push_front(10);
    l.emplace_front(9);

    //rets functions are same as vector 
    //begin, end, rbegin, rend, clear, insert, size, swap etc.
    
    return 0;
}