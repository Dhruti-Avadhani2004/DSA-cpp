#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"hello love babbar"<<endl;
    }
    
    void sayHello(string name){
        cout<<"hello love babbar "<<name<<endl;
    }
};

int main(){
    
    A a1;
    a1.sayHello();
    a1.sayHello("sir");
    
    
    
    
    return 0;
}




















