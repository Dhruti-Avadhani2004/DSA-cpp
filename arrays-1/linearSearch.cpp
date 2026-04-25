// write the code to perform linear search in an array
// check whether the element 1 is present in the array or not

#include<iostream>
using namespace std;
int flag = 0;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            flag = 1;
        }
    }
    return flag;

}

int main(){
    int arr[10] = {7,8,9,0,1,4,2,6,8,9};
    int size = sizeof(arr)/sizeof(arr[10]);

    int flag = linearSearch(arr, size, 3);
    if(flag)
        cout<<"element is present in the array";
    else
        cout<<"element is not present in the array";



    return 0;
}

