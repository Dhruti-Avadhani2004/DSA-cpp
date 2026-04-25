// binary search using recursion

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int key){
    int mid = low + ((high - low) / 2);
    //base case
    if(low > high){
        return -1;
    }
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarySearch(arr, low, mid - 1, key);
    }
    else{
        return binarySearch(arr, mid + 1, high, key);
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
    int low = 0;
    int high = n - 1;
    
    int ans = binarySearch(arr, low, high, key);
    cout<<ans;
    
    
    return 0;
}

/*SUBMITTED CODE CODESTUDIO 

int binarySearch(vector<int> &arr, int low, int high, int key){
    int mid = low + ((high - low) / 2);
    //base case
    if(low > high){
        return -1;
    }
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarySearch(arr, low, mid - 1, key);
    }
    else{
        return binarySearch(arr, mid + 1, high, key);
    }
    
    
}

int search(vector<int> &nums, int target) {
    // Write your code here.
    int low = 0;
    int high = nums.size() - 1;
    int ans = binarySearch(nums, low, high, target);
    return ans;
}
    
*/