#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    cout<<sizeof(arr)<<endl; // this prints the size of the pointer 
    cout<<sizeof(arr) / sizeof(arr[0])<<endl; // here also arr is taken as size of pointer, giving 8 / 4 = 2. do this in main function, store in n and then pass it in this function, as a size and dont calculate here. calculating in main, this arr is an array, but in this function, arr is a pointer, with size 8 bytes. 
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p = *p + 1;
}
int main(){
    int val = 5;
    int *p = &val;
    
    print(p);
    update(p);
    print(p);
    
    int arr[5] = {1,2,3,4,5};
    
    int sum = getSum(arr, 5);
    cout<<sum;
    
  
}

/*
Your Output
5
6
8
2
15
*/