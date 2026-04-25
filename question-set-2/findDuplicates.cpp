// find the duplicate number that is repeated twice
// {1,2,3,4,3} n = 5 and no. of elements = n - 1

//sum = 1+2+3+4+5 = 15
// sum = 1+2+3+4+2 +5 = 17

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,3};
    int n = 5; // since nos go only until n-1, obviously the number n will not be present in the array
    int sum = 0;
    int arrsum = n;

    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }

    for(int i = 0; i < n; i++){
        arrsum = arrsum + arr[i];
    }

    cout<<(arrsum - sum);

    

    return 0;
}