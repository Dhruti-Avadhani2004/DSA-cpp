#include<iostream>
#include<cstring>
using namespace std;
#include "hero.cpp"

int main(){
    hero a;//for static objects, destructor is automatically called
    hero *b = new hero();//for dynamic objects, destructor needs to be manually called
    
    delete b;

    
    
    return 0;
}