// sort 0 1 2

// 

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr1[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    
    int arr2[n];
    
    int i = 0;
    int j = 0;
    while(i < n){
        if(arr1[i] == 0){
            arr2[j] = arr1[i];
            arr1[i] = INT_MAX;
            
            j++;
        }
        i++;
    }
    
    i = 0;
    while(i < n){
        if(arr1[i] == 1){
            arr2[j] = arr1[i];
            arr1[i] = INT_MAX;
            
            j++;
        }
        i++;
    }
    
    i = 0;
    while(i < n){
        if(arr1[i] == 2){
            arr2[j] = arr1[i];
            arr1[i] = INT_MAX;
            
            j++;
        }
        i++;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    
    
    return 0;
}


/*
SUBMITTED SOLUTION

#include <bits/stdc++.h> 
#include<climits>
void sort012(int *arr, int n)
{
   // write code here.
   int arr2[n];

   int i = 0;
   int j = 0;

   while(i < n){
      if(arr[i] == 0){
         arr2[j] = arr[i];
         arr[i] = INT_MAX;
         
         j++;

      }
      i++;
   }

    i = 0;
   while(i < n){
      if(arr[i] == 1){
         arr2[j] = arr[i];
         arr[i] = INT_MAX;
         
         j++;

      }
      i++;
   }

    i = 0;
   while(i < n){
      if(arr[i] == 2){
         arr2[j] = arr[i];
         arr[i] = INT_MAX;
         
         j++;

      }
      i++;
   }

   int temp = 0;
   for(int i = 0; i < n; i++){
      arr[i] = arr2[temp];
      temp++;
      
   }




}

*/