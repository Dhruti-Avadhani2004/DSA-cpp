// using recursion, reverse a given string 

#include<iostream>
#include<vector>
using namespace std;

void reverseString(string &arr, int i, int j){
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
    string arr;
    cin>>arr;
    int n = arr.size();
    
    reverseString(arr, 0, n - 1);
    
    cout<<arr;
    
    
    return 0;
}