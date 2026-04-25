// print sum of all elements in an array

#include<iostream>
using namespace std;

void input(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
}



int main (){
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);

    input(arr, size);

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    cout<<"the sum of all the elements of the array is "<<sum;

    

    return 0;
}