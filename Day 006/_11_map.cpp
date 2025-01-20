#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //Unique key and values can be same
    //Map stores unique keys in sorted order
    //map<key, value> name;  --> Syntax
    map<int, int> m;
    map<int, pair<int,int>> mp;
    map<pair<int,int>, int> pm;

    m[1]=2;     //{{1,2}}
    // m.emplace({3,1});   //{{1,2},{3,1}}
    m.insert({4,2});    //{{1,2},{3,1},{4,2}}

    pm[{2,3}] = 10;

    for(auto it: m){
        cout<<it.first<<" "<<it.second;
    }

    cout<<m[1];  //2
    cout<<m[3];     //null

    auto it = m.find(4);    //iterator of {4,2}
    cout<<*(it).second<<endl;

    it = m.find(5);        //m.end() -> just after last element

    auto it2 = m.lower_bound(2);
    auto it3 = m.upper_bound(2);


    return 0;
}