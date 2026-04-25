#include<iostream>
using namespace std;

class animal{
    public:
    int eyes;
    
    void aniprint(){
        cout<<"i am an animal"<<endl;
    }
    
    
};

class dog: public animal{
    public:
    int nose;
    
    void dogprint(){
        cout<<"i am a dog"<<endl;
    }
    
};

class golden: public dog{
    public:
    string tail;

    void goldenprint(){
        cout<<"i am just a little boy"<<endl;;
    }
    
    
};

int main(){
    golden g1;
    g1.eyes = 2;
    g1.nose = 1;
    g1.tail = "furry";
    cout<<g1.eyes<<g1.nose<<g1.tail<<endl;
    g1.goldenprint();
    g1.dogprint();
    g1.aniprint();
    
    
    
    return 0;
}




















