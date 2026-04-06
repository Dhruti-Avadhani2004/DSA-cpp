#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<(a&b)<<"\n";
    // 4 = 100
    // 6 = 110
    // & = 100 = 4

    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"a^b = "<<(a^b)<<endl;

    return 0;
}