// selection sort

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void selectionSort(int arr[], int n){
    


    int pointer = 0;
    
    while(pointer <= n - 1){
        int min = pointer;
        for(int i = pointer; i < n; i++){
            if(arr[i] < arr[min]){
                min = i;
                // 5 3 4 1 2
                // 
                
            }
            
        }
        swap(arr[pointer], arr[min]);
        pointer++;
        
    }
}

// finding minimum value
/*
int i = 0;
int min = 0;
for(int i = 0; i < n; i++){
    if(arr[i] < arr[min]){
        min = i;
    }
    
}
*/

int main (){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    selectionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}

/*
SUBMITTED / OPTIMIZED ANSWER
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if (arr[min] > arr[j]){
                min = j;

            }

        }
        swap(arr[min], arr[i]);
    }
}
*/