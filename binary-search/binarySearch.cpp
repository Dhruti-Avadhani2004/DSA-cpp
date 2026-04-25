// binary search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    // int flag = 1;
    
    for(int i = 0; i < n/2; i++){
        int mid = ((high + low)/2); // to calculate mid put high+low not high-low
        if (arr[mid] == k){
            return mid;
            
        }
        else if (arr[mid] < k){ // using if else if statements really helps
            low = mid;
        }
        else if (arr[mid] > k){
            high = mid;
        }
        else
        cout<<"error"; //just extra to be sure
        
    }
    return -1;

    
    // 1 2 3 4 5 6 7 
    
    
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    int arr[n];
    for(int i = 0 ; i < n; i++){
        
        cin>>arr[i];
    }
    
    int ans = binarySearch(arr, n, k);
    cout<<ans;
    
    
    
    
    return 0;
    
}