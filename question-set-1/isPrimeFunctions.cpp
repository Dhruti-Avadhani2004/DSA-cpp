// write a code using functions to tell if a number is prime or not

#include<iostream>
using namespace std;

int isPrime(int n){
    int flag = 1;
    for(int i = (n - 1); i >= 2; i--){
        if (n % i == 0){
            flag = 0;
        }
    }
    
    if(n == 2)
        return 1;
    if(n == 1)
        return 2;
    if(flag == 1)
        return 1;
    if(flag == 0)
        return 0;
    
    return 0;
        
}

int main(){
    
    int n;
    cin>>n;
    int prime = isPrime(n);
    
    if (prime == 1)
        cout<<"True";
    if (prime == 0)
        cout<<"False";
    if (prime == 2)
        cout<<"neither prime nor composite";
        
    
    
    return 0;
}