// using recursion, reverse a given string 

#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<int> &arr, int i, int j){
    // 1 2 3 4 5
    //base case
    if(i > j){
        return;
    }
    
    //recursive case
    swap(arr[i], arr[j]);
    reverseString(arr, i + 1, j - 1);
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    reverseString(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}