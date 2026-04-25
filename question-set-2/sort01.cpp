// sort 01

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    cin>>n;;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int i = 0;
    int j = n - 1;
    // 0 0 1 0 1 1 1 0 0 1
    // 0 0| 0 1 | 1 0 | 1 1
    while(i < j){
        if(arr[i] == 0 && arr[j] == 1){
            i++;
            j--;
        }
        
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
        else if(arr[i] == 0 && arr[j] == 0){
            while(arr[i] == 0){
                i++;
            }
            swap(arr[i], arr[j]);
            j--;
        }
        
        else {
            while(arr[j] == 1){
                j--;
            }
            swap(arr[i], arr[j]);
            i++;
        }
        
        
        
        
        
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


/*
SIMPLER AND BETTER LOGIC

// sort 01

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    cin>>n;;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int i = 0;
    int j = n - 1;
    // 0 0 1 0 1 1 1 0 0 1
    // 0 0| 0 1 | 1 0 | 1 1
    
    while(i < j){
        if (arr[i] == 0){
            i++;
        }
        else{
            swap(arr[i], arr[j]);
            j--;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

*/