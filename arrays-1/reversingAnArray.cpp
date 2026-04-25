// write a code to reverse an array

#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int temp = 0;
    int a = arr[0];
    
    int b = size -1;

    for(int i = 0; i < size/2; i++){
        temp = arr[i];
        arr[i] = arr[b];
        arr[b] = temp;
        b--;
    }
    
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }


}

int main (){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" "<<endl;
        
    }

    reverse(arr, size);




    return 0;
}