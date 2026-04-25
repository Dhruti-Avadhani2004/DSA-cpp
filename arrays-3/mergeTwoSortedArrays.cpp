// merge two sorted arrays

#include<iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int arr3[], int a, int b, int n){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < a && j < b){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    while(i < a){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    while(j < b){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main(){
    int a, b;
    cin>>a>>b;
    
    int arr1[a];
    int arr2[b];
    
    for(int i = 0; i < a; i++){
        cin>>arr1[i];
    }
    
    for(int i = 0; i < b; i++){
        cin>>arr2[i];
    }
    
    int n = a+b;
    int arr3[n];
    
    mergeArray(arr1, arr2, arr3, a, b, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}


/*
SUBMITTED SOLUTION LEETCODE
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1.begin(), nums1.begin() + m);
        int i = 0;
        int j = 0;
        int k = 0;

        while(i < m && j < n){
            if(temp[i] < nums2[j]){
                nums1[k] = temp[i];
                k++;
                i++;
            }
            else{
                nums1[k] = nums2[j];
                k++;
                j++;
            }
        }

        while(i < m){
            nums1[k] = temp[i];
            i++;
            k++;
        }

        while(j < n){
            nums1[k] = nums2[j];
            j++;
            k++;
        }
        
    }
};

*/