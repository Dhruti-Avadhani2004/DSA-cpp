#include<iostream>
#include<cstring>
using namespace std;
#include "hero.cpp"

int hero::timeToComplete = 5;//scope resolution operator
//static member is always created in the class and not the object
int main(){
    cout<<hero::timeToComplete<<endl;
    
    
    return 0;
}