// given an array {4,12,8,10} get the minimum and maximum element of that array

#include<iostream>
using namespace std;

int main(){
    int arr[4] = {4,12,8,10};
    int min = arr[0];
    int max = arr[0];
    // first initialize min and max to the first values in the array

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }

    cout<<"the minimum value in the array is "<<min<<" and "<<"the maximum value in the array is "<<max;

    return 0;
}