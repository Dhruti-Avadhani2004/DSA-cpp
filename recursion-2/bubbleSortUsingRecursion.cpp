// using recursion, perform bubble sort


#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    //base case
    if(n == 0 || n == 1){
        return;
    }
    
    //solve 1 case
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    //recursion
    bubbleSort(arr, n - 1);
    
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}