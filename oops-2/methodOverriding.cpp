#include<iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
    
};

class dog: public animal{
    public:
    void speak(){
        cout<<"but i bark bro"<<endl;
    }
    
};

int main(){
    
    dog d1;
    d1.speak();
    return 0;
}




















