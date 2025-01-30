#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>0; i--){
        bool isSwap = 0;
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = 1;
            }
        }
        if(!isSwap) break;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubble_sort(arr, n);
    print_arr(arr, n);
    return 0;
}