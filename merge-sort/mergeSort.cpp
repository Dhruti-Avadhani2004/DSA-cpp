// complete merge sort

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int high){
    int mid = low + ((high - low)/2);
    
    // create two subarrays and copy the array contents to each subarrays
    int len1 = mid - low + 1; //length of the left subarray
    int len2 = high - mid; //length of the right subarray
    
    // creating new subarrays
    vector<int> arr1(len1);
    vector<int> arr2(len2);
    
    // copying elements into the new subarrays
    int k = low;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[k];

        k++;
    }
    
    k = mid + 1;
    for(int i = 0; i < len2; i++){
        arr2[i] = arr[k];

        k++;
    }
    
    // sorting and merging the two subarrays into the main array
    int ind1 = 0;
    int ind2 = 0;
    k = low;
    
    while(ind1 < len1 && ind2 < len2){
        if(arr1[ind1] < arr2[ind2]){
            arr[k] = arr1[ind1];
            k++;
            ind1++;
        }
        else{
            arr[k] = arr2[ind2];
            k++;
            ind2++;
        }
    }
    
    while(ind1 < len1){
        arr[k] = arr1[ind1];
        k++;
        ind1++;
    }
    
    while(ind2 < len2){
        arr[k] = arr2[ind2];
        k++;
        ind2++;
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    int mid = low + ((high - low)/2);
    
    //base case
    if(low >= high){
        return;
    }
    
    //recursion case
    //mergeSort for left subarray
    mergeSort(arr, low, mid);
    //mergeSort for right subarray
    mergeSort(arr, mid + 1, high);
    
    //merge the two subarrays to the main array
    merge(arr, low, high);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        
    }
    
    mergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        
    }
    
    
    return 0;
}

/*SUBMITTED CODE CODE360

void merge(vector<int> &arr, int low, int high){
    int mid = low + ((high - low)/2);

    //create sizes of the two subarrays
    int len1 = mid - low + 1;
    int len2 = high - mid;

    //create arrays for the two lengths
    vector<int> arr1(len1);
    vector<int> arr2(len2);

    //copy contents from the main array to the left subarray
    int k = low;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[k];
        k++;
    }
    //copy contents from the main array to the right subarray
    k = mid + 1;
    for(int i = 0; i < len2; i++){
        arr2[i] = arr[k];
        k++;
    }

    //sort and merge both the subarrays to the main array
    int ind1 = 0;
    int ind2 = 0;
    k = low;

    while(ind1 < len1 && ind2 < len2){
        if(arr1[ind1] < arr2[ind2]){
            arr[k] = arr1[ind1];
            k++;
            ind1++;
        }
        else{
            arr[k] = arr2[ind2];
            k++;
            ind2++;
        }
    }

    while(ind1 < len1){
        arr[k] = arr1[ind1];
        k++;
        ind1++;
    }

    while(ind2 < len2){
        arr[k] = arr2[ind2];
        k++;
        ind2++;
    }
}

void mergie(vector<int> &arr, int low, int high){
    int mid = low + ((high - low)/2);
    //base case
    if(low >= high){
        return;
    }

    //call mergie recursively for left subarray
    mergie(arr, low, mid);
    //call mergie recursively for right subarray
    mergie(arr, mid + 1, high);
    //call merge function to merge both the left subarray and right subarray
    merge(arr, low, high);
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mergie(arr, 0, n - 1);

}
    

*/