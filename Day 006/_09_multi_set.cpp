#include <bits/stdc++.h>
using namespace std;

int main(){
    
    multiset<int> ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}

    ms.erase(1);    //Erase all 1's

    int cnt = ms.count(1);  //Return how many ones are present

    ms.erase(ms.find(1));       //Erase only 1st 1 as ms.find() returns iterator

    ms.erase(ms.find(1), ms.find(1)+2);     //erase [start,end)

    //Rest all functions are same as set
    return 0;
}