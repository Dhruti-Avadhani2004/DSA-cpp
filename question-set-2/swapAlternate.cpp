// swap alternate elements in an array
// ip = {1,2,7,8,5}
// op = {2,1,8,7,5}



#include<iostream>
using namespace std;

void swap (int arr[], int size){
   int temp, a, b;
   // 1 2 7 8 5 
   // 
   int val1;
   a = 0; // 2
   b = 1; // 3
   int i = 0; // 2
   int j = 0;
   while(i < size-1){
    temp = a; // twmp = 2
    val1 = arr[i]; // 7
    arr[i] = arr[b]; // arr[2] = 8
    arr[i + 1] = val1; // arr[3] = val1 = 7
    a = a+2; // a=4
    b=b+2; //b=5
    i=i+2; //i=4

   }

   for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
   }
   
}

int main(){
    int arr[6] = {1,2,7,8,5,9};
    swap(arr, 6);
    



    return 0;
}