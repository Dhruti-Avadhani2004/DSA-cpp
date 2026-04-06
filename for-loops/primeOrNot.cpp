#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    bool isPrime = 1;

    if (n == 2){
        cout<<"the number is prime";
        return 0;
    }

    for(int i = 2; i < n; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
            
    }

    if(isPrime == 0){
        cout<<"the number is a non-prime";
    }
    else
        cout<<"the number is a prime";

    return 0;
}