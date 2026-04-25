// quick sort

#include<iostream>
#include<vector>
using namespace std;

// 3 1 4 5 2

int partition(vector<int> &arr, int low, int high){
    // find pivot
    int pivot = arr[low];
    
    int count = 0;
    for(int i = low + 1; i <= high; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    
    //right place of pivot 
    int pivotIndex = low + count;
    swap(arr[pivotIndex], arr[low]);
    
    //left and right wala part 
    int i = low;
    int j = high;
    
    while(i < pivotIndex && j> pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        
        if(i < pivotIndex && j> pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIndex;
   
    
}

void quickSort(vector<int> &arr, int low, int high){
    //base case
    if(low >= high){
        return;
    }
    
    //partition algo 
    int p = partition(arr, low, high);
    //recursion to sort left subarray
    quickSort(arr, low, p - 1);
    //recursion to sort right subarray
    quickSort(arr, p + 1, high);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    quickSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    
    return 0;
}