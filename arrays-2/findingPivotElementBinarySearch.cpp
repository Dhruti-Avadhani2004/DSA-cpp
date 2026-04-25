// pivot element in an array using binary search

#include<iostream>
using namespace std;

int pivotElement(int arr[], int n){
    int low = 0;
    int high = n - 1;
    int mid;
    
    while(low<=high){
        mid = low + ((high - low)/2);
        if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]){
            return mid;
        }
        if(arr[mid] >= arr[0]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int ans = pivotElement(arr, n);
    cout<<ans;
    
    
    
    return 0;
}