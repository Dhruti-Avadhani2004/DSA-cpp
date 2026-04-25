// reverse an array
// reverse an array

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;
    
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        
    }
    
    reverseArray(arr, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        
    }
    
    
    
    return 0;
}


/*
SUBMITTED CODE ON STUDIO CODE
void reverseArray(vector<int> &arr , int m) {
    // Write your code here 
    int i = m + 1;
    int j = arr.size() - 1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }      	
}

*/