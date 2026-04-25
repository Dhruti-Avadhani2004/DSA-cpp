#include<iostream>
using namespace std;
#include "hero.cpp"

int main(){
    //copy constructor
    hero suresh(69, 'B');
    hero ritesh(suresh); // copy constructor is called
    //ritesh.health = suresh.health;
    //ritesh.level = suresh.level
    cout<<suresh.getHealth()<<" "<<suresh.level<<endl;
    cout<<ritesh.getHealth()<<" "<<ritesh.level<<endl;
    
    

    
    
    return 0;
}