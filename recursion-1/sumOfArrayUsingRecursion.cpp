// given an array as input, return the sum of the elements 
// in the array using recursion

#include<iostream>
#include<vector>
using namespace std;

int getSum(vector<int> &arr, int size){
    //base case
    // 1 2 3 4 5
    if(size == 0){
        return 0;
    }
    
    // sum algo and recursion
    int sum = getSum(arr, size - 1) + arr[size - 1];
    
    return sum;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int sum = getSum(arr, n);
    cout<<sum;
    
    
    
    return 0;
}