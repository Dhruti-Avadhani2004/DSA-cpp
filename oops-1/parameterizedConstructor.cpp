#include<iostream>
using namespace std;
#include "hero.cpp"

int main(){
    hero ramesh(10, 'D');
    cout<<&ramesh<<endl;
    cout<<ramesh.getHealth();
    hero *h = new hero;
    
    
    return 0;
}