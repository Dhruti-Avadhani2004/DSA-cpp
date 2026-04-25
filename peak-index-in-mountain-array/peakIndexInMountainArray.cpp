// SUBMITTED ANSWER AT THE END
// peak index in mountain array

#include<iostream>
using namespace std;

int peakIndex(int arr[], int n){
    int low = 0; 
    int high = n - 1;
    int mid;
    
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[mid + 1]){
            low = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1]){
            high = mid;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int ans = peakIndex(arr, n);
    cout<<ans;
    
    
    return 0;
}

/*
SUBMITTED SOLUTION (LEETCODE)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        int mid;

        while(low<=high){
            mid = low + ((high - low)/2);
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
                return mid;
            }
            else if(arr[mid] > arr[mid + 1]){
                high = mid;
            }
            else if(arr[mid] < arr[mid + 1]){
                
                low = mid + 1;
            }
        }
        return -1;
        
    }
};
*/