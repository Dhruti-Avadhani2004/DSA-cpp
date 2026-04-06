// pichle do numbers ka sum next number hota hai 
// 0 1 1 2 3 5 8...
#include<iostream>
using namespace std;

int main (){
    // printing the first n numbers of the fibonacci series
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int a = 0;
    int b = 1; 
    int temp = 0;

    cout<<"0 1 ";
    for(int i = 1; i<=(n - 2); i++){
        temp = a + b;
        cout<<temp<<" ";
        a = b;
        b = temp;
        
    }

    return 0;
}