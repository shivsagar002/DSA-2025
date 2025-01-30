#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void quickSort(int arr[], int begin, int end){
    if(begin>=end) return;
    int pivot = begin;
    int ptr1 = begin+1, ptr2 = end;
    while(ptr1<=end && ptr2 >= begin+1){
        while(arr[ptr1]<=arr[pivot]){
            ptr1++;
        }
        while(arr[ptr2]>arr[pivot]){
            ptr2--;
        }
        if(ptr1<ptr2){
            swap(arr[ptr1], arr[ptr2]);
        }
    }
    swap(arr[pivot], arr[ptr2]);
    quickSort(arr, begin, ptr2-1);
    quickSort(arr, ptr2+1, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}