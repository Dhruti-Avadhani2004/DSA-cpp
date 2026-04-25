#include<iostream>
using namespace std;
#include "hero.cpp"

int main(){
    // creating a hero type object
    hero ramesh;
    
    
    //ramesh.health = 70;
    ramesh.level = 'A';
    
    
    ramesh.setHealth(69);
    cout<<ramesh.getHealth()<<endl;
    cout<<" "<<ramesh.getHealth()<<" "<<ramesh.level<<endl;
    
    
    
    return 0;
}