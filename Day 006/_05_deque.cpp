#include <bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(7);

    dq.emplace_back(9);
    dq.emplace_front(11);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rets functions are same as vector 
    //begin, end, rbegin, rend, clear, insert, size, swap etc.
    
    return 0;
}