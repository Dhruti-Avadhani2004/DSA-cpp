// ####scroll for more optimized solution
// finding the first and last occurance of an element in a sorted array

// 1 2 2 3 3 3 4 4 4 4 5
// the element that we need to find will always be together. so first we shall find the first 
// occurance of the element only.

#include<iostream>
using namespace std;

int firstBinarySearch(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    int temp;
    int temp1;
    
    while(low <= high){
        int mid = ((high + low)/2);
        
        if(arr[mid] == k){
            temp = mid;
            temp1 = temp;
            while(temp < n && arr[temp] == k){
                if(arr[temp] == k){
                    temp1 = temp;
                    temp--;
                }
            }
            return temp1;
        }
        
        else if(arr[mid] > k){
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
    }
    return -1;
    
    
}

int lastBinarySearch(int arr[], int firstPos, int n, int k){
    int temp = firstPos;
    while(temp >= 0 && arr[temp] == k){
        if(arr[temp] == k){
            temp++;
        }
    }
    return temp - 1;
}

int main(){
    int n, k;
    cin>>n>>k;
    
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int firstPos = firstBinarySearch(arr, n, k);
    int secondPos = lastBinarySearch(arr, firstPos, n, k);
    cout<<firstPos<<" "<<secondPos;
    
    return 0;
}

/*
MORE OPTIMIZED SOLUTION

// first and last occurance optimized code

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    int mid;
    int ans = -1;
    
    while(low <= high){
        mid = low + ((high - low)/2);
        if(arr[mid] == k){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else if(arr[mid] > k){
            high = mid - 1;
        }
        
    }
    return ans;
    
}

int lastOcc(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    int mid;
    int ans = -1;
    
    while(low <= high){
        mid = low + ((high - low)/2);
        if(arr[mid] == k){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] > k){
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
    }
    return ans;
}


int main(){
    
    int n, k;
    cin>>n>>k;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int lowerIndex = firstOcc(arr, n, k);
    int higherIndex = lastOcc(arr, n, k);
    
    cout<<"0 1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<lowerIndex<<" "<<higherIndex;
    
    
    return 0;
}
*/