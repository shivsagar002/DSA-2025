#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //Maintained by tree
    //Everything in sorted order and unique
    set<int> s;
    s.insert(5);    //{5}
    s.insert(2);    //{2,5}
    s.insert(3);    //{2,3,5}
    s.insert(2);    //{2,3,5}
    s.emplace(7);   //{2,3,5,7}

    auto it = s.find(3);    //returns iterator of 3

    auto it2 = s.find(6);   //returns set.end() [out of set just after last element]

    s.erase(3);     //{2,3,7} takes log(n) time

    int cnt = s.count(2); 

    auto it3 = s.find(7);
    s.erase(it3);       //takes O(1) time

    // {1,2,3,4,5}
    auto itf = s.find(2);
    auto itl = s.find(5);
    s.erase(itf, itl);      //Erase everything b/w [start,end) {1,5}

    auto it_lb = s.lower_bound(3);
    auto it_lb = s.upper_bound(3);

    //Everything O(log(n)) Time 

    return 0;
}