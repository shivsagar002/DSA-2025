#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //Maintained by tree data structure
    priority_queue<int> pq;     //max heap
    pq.push(5);     //{5}
    pq.push(1);     //{5,1}
    pq.push(8);     //{8,5,1}
    pq.emplace(10);     //{10,8,5,1}

    cout<<pq.top();     //10

    pq.pop();       //pop 10

    cout<<pq.top();     //8

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pqg;

    pqg.push(5);    //{5}
    pqg.push(2);    //{2,5}
    pqg.push(8);    //{2,5,8}

    cout<<pqg.top();  //2

    // push,pop -> log(n)
    // top -> O(1)
    return 0;
}