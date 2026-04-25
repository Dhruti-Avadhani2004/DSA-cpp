//pair sum
// 1 2 3 4 5 
// 1 - 2, 1-3, 1-4, 1-5
// 2-3,2-4,2-5
//3-4,3-5
// 4-5

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    // a is the no. of elements in array and b is the sum we need
    int arr[a];
    
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    
    int i = 0;
    int j = 0;
    
    while(i < a){
        if(arr[i] + arr[j] != b){
            j++;
        }
        if(arr[i] + arr[j] == b){
            if(arr[i] < arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                j++;
            }
            else{
                cout<<arr[j]<<" "<<arr[i]<<endl;
                j++;
            }
            
        }
        if(j >= a - 1){
            i++;
            j = i;
        }
    } 

    
    
    
    
    return 0;
}