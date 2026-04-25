// insertion sort 

#include<iostream>
using namespace std; // temp = 1
// 2 3 4 5 1
//       j i
// 2 3 4 _ 5
// j
// 4(0)
// 2(0) 4(1)
void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        while(arr[j] > temp && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
        
        
    }
    
 
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    insertionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    
    
    return 0;
}



/* SUBMITTED CODE
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        while(arr[j] > temp && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

*/