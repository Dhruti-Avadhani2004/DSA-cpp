//linear search using recursion, given the key to search for. 
// return the index of the element if present else return -1

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr, int size, int key){
    //base case
    if(size == 0){
        return -1;
    }
    
    // 3 1 4 5 2
    
    //recursion
    if(arr[size - 1] == key){
        return size - 1;
    }
    else{
        return linearSearch(arr, size - 1, key);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    int ans = linearSearch(arr, n, key);
    cout<<ans;
    
    
    return 0;
}