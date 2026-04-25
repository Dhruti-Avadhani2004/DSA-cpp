 // bubble sort

#include<iostream>
using namespace std;

void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    
    int i = 0;
    int j = i + 1;
    int pointer = n;
    
    for(int k = 0; k < n; k++){
        pointer--;
        i = 0;
        j = i + 1;
        
        for(int l = 0; l < pointer; l++){
            if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            }
            i++;
            j++;
        }
        // 2 3 1 4 5
        // i j   p 
        //         
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}


/*
SUBMITTED CODE STUDIO

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int i = 0; 
    int j = i + 1;
    int pointer = n;

    for(int k = 0; k < n; k++){
        pointer--;
        i = 0;
        j = i + 1;
        bool swapped = false;
        for(int l = 0; l < pointer; l++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                swapped = true;
            }
            i++;
            j++;
        }
        if (swapped == false){
            break;
        }

    }
}

*/