// declare and initialize an array and write a function to print all the values of the array.

#include<iostream>
using namespace std;

void printArr(int arr [], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int arrsize = sizeof(arr)/sizeof(int);
    

    printArr(arr, arrsize);

    return 0;
}