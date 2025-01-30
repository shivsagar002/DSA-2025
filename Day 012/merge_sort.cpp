#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeArray(int arr[], int begin, int mid, int end){
    int ptr1 = begin, ptr2 = mid+1;
    vector<int> temp;
    while(ptr1<=mid && ptr2<=end){
        if(arr[ptr1]<=arr[ptr2]){
            temp.push_back(arr[ptr1++]);
        }
        else{
            temp.push_back(arr[ptr2++]);
        }
    }
    while(ptr1<=mid){
        temp.push_back(arr[ptr1++]);
    }
    while(ptr2<=end){
        temp.push_back(arr[ptr2++]);
    }
    for(int i=0; i<temp.size(); i++){
        arr[i+begin] = temp[i];
    }
}

void mergeSort(int arr[], int begin, int end){
    if(begin==end) return;
    int mid = begin + (end-begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    mergeArray(arr, begin, mid, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}