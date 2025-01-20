#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //implemented by single linked list
    vector<int> v1;
    v1.push_back(4);
    v1.emplace_back(7);

    vector<pair<int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5, 100);  //{100, 100, 100, 100, 100}
    vector<int> v4(5);  //{0,0,0,0,0}  --> Depending on compiler garbage value or 0

    vector<int> v5(v3);  //copy vector

    vector<int> v6 = {1,2,3,4,5,6};
    vector<int>::iterator it = v6.begin();  //first
    it++;
    cout<<*(it)<<endl;

    it = it + 2;
    cout<<*(it)<<endl;

    vector<int>::iterator it2 = v6.end();  //last -> after last element
    cout<<*(it2)<<endl;
    auto it3 = v6.rend();   //first  -> before first element
    cout<<"rend : "<<*(it3)<<endl;
    it3--;     //everything goes in reverse order
    cout<<*(it3)<<endl;
    auto it4 = v6.rbegin();   //last
    cout<<*(it4)<<endl;

    cout<<v6[0]<<" "<<v6.at(0)<<endl;
    cout<<v6.back();

    for(vector<int>::iterator it = v6.begin(); it != v6.end(); it++){
        cout<<*(it)<<" ";
    }

    for(auto it = v6.begin(); it != v6.end(); it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){     //for each loop
        cout<<it<<" ";
    }

    v6.erase(v.begin()+1);  //erase 2nd element
    v6.erase(v.begin()+1, v.begin()+4);  //[start, end)

    vector<int> v7(2,100);   //{100, 100}
    v7.insert(v7.begin(),300);    //{300, 100, 100}
    v7.insert(v7.begin()+1,2,30);   //{300, 30, 30, 100, 100}
    vector<int> copy(2,50);
    v7.insert(v7.begin(), copy.begin(), copy.end());   //copy elements of one vector to another vector at begin

    cout<<v7.size()<<endl;  //returnm size

    v7.pop_back();  //remove last element

    v1.swap(v2);   //v1->v2 && v2->v1

    v7.clear();     //erase the entire vector

    cout<<v.empty();  //bool result vector is empty or not
    return 0;
}