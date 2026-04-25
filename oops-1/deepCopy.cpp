#include<iostream>
#include<cstring>
using namespace std;
#include "deepHero.cpp"

int main(){
    deepHero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "babbar";
    hero1.setName(name);
    
    hero1.print();
    
    //use default copy const to create another hero
    deepHero hero2(hero1);
    hero2.print();
    
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    
    
    return 0;
}