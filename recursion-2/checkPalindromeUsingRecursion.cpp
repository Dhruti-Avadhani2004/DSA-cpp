// using recursion, check if the given string is a palindrome or not

#include<iostream>
#include<vector>
using namespace std;

bool checkPalindrome(string &arr, int i, int j){
    //base case
    if(i > j){
        return true;
    }
    
    if(arr[i] != arr[j]){
        return false;
    }
    
    if(arr[i] == arr[j]){
        checkPalindrome(arr, i + 1, j - 1);
    }
    return true;
}


int main(){
    string arr;
    cin>>arr;
    int n = arr.size();
    
    bool ans = checkPalindrome(arr, 0, n - 1);
    
    cout<<ans;
    
    
    return 0;
}