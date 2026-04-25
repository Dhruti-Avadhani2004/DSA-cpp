//check if an array is sorted using recursion
#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size == 0|| size == 1){
        return true;
    }
    
    //recursive
    // 1 2 3 4 5
    bool ans;
    if(arr[size - 1] >= arr[size - 2]){
        ans = isSorted(arr, size - 1);
    }
    else{
        return false;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    bool ans = isSorted(arr, n);
    cout<<ans;
    
    
    return 0;
}