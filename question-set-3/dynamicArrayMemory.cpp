#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n){ // pass by reference 
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    
    int *arr = new int[n]; // this way
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int sum = getSum(arr, n); //  function call
    cout<<sum;

    
}
