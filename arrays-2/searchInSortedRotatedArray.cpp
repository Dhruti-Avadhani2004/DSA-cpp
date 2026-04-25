// search in sorted and rotated array 
// first find the pivot element

#include<iostream>
using namespace std;

// 7 8 9  1 2 3

int globalpivot;

int findingPivot(int arr[], int n){
    int low = 0;
    int high = n - 1;
    int mid;
    
    while(low<=high){
        mid = low + ((high - low)/2);
        if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]){
            return mid;
        }
        if (arr[mid] >= arr[0]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int k){
    if(k < arr[0]){
        int low = globalpivot;
        int high = n - 1;
        int mid;
        
        while(low<=high){
            mid = low + ((high - low)/2);
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] > k){
                high = mid - 1;
            }
            else if(arr[mid] < k){
                low = mid + 1;
            }
        }
    }
    else{
        int low = 0;
        int high = globalpivot-1;
        int mid;
        
        while(low<=high){
            mid = low + ((high - low)/2);
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] > k){
                high = mid - 1;
            }
            else if(arr[mid] < k){
                low = mid + 1;
            }
        }
        
        
    }
    return -1;

}

int main(){
    
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    globalpivot = findingPivot(arr, n);
    // cout<<globalpivot;
    int ans = binarySearch(arr, n, k);
    cout<<ans;
    
    
    return 0;
}