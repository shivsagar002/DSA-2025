#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // FIFO  
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.emplace(3);   //{1,2,3}

    q.back() += 5;      //3+5=8

    cout<<q.back();     //8

    cout<<q.front();    //1

    q.pop();    //remove 1

    cout<<q.front();    //2

    //All Operations in O(1) time
    return 0;
}