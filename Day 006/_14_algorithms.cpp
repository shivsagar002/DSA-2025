#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //they are same (.second)
    if(p1.first > p2.first) return true;
    return false;
}
int main(){
    
    int arr[10] = {3,4,7,1,5,9,71,8,21,45};
    vector<int> v = {24,56,78,89,53,16,72,38,82,49};

    sort(arr,arr+10);       //sort entire array
    sort(v.begin(),v.end());    //sort full vector
    sort(arr+2,arr+7);      //Sort only range elements [s,e)
    sort(arr, arr+10, greater<int>);    //Sort in reverse order

    pair<int, int> a[] = {{1,2},{2,1},{4,1}};
    //sort it according to second element
    // if second element is same, then sort it according to first element but in desending

    sort(a,a+n,comp);  //{{4,1}, {2,1}, {1,2}} comp() function is above

    int num = 7;
    int cnt = __builtin_popcount();     //return total set bits(1) in binary representation

    long long num = 167865836471;
    int cnt = __builtin_popcountll();   //return total set bits(1) in binary representation

    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));   // next permutation returns different permutations of a string

    //If you want to print all permutation then your string must be sorted 

    int maxi = *max_element(a, a+n);  //max element in an array
    return 0;
}