#include<iostream>
using namespace std;

int main(){
    cout<<"enter the value of n here : ";
    int n;
    int sum = 0;
    cin>>n;

    for(int i = 0; i <= n; i++){
        sum = i + sum;
    }
    cout<<"the sum of all numbers upto n is : "<<sum<<endl;


    return 0;
}