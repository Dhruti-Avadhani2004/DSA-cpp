#include<iostream>
using namespace std;
#include "hero.cpp"

int main(){
    //dynamic allocation
    // int *i = new int;
    
    hero *h = new hero; //dynamically allocated memory in heap
    h->setLevel('A');
    cout<<"level is : "<<(*h).getLevel()<<endl;
    cout<<"health is : "<<(*h).getHealth()<<endl;
    (*h).setHealth(60);
    cout<<"health is : "<<h->getHealth()<<endl;
    
    return 0;
}