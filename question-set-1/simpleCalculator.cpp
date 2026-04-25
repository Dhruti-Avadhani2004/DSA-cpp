#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the operator: +, -, *, /: "<<endl;;
    cin>>ch;
    int a;
    int b;
    cout<<"enter the two numbers as a space separated sequence: ";
    cin>>a;
    cin>>b;
    
    
    switch(ch){
        case '+': cout<<(a+b)<<"sum";
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        default: cout<<"invalid operator, try again";
        
        
    }
    
    
    
    return 0;
}