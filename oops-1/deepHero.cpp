#include <iostream>
#include<cstring>
using namespace std;

class deepHero{
    private:
    int health;
    
    public:
    char *name;
    char level;
    
    //defualt constructor
    deepHero(){
        cout<<" default constructor called"<<endl;
        name = new char[100];
    }
    
    //parameterized constructor
    deepHero(int health, char level){
        cout<<"this is the parameterized constructor"<<endl;;
        this->health = health;
        this->level = level;
    }
    
    //copy constructor
    deepHero(deepHero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level = temp.level;
    }
    
    int getHealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health = h;
    }
    
    void setLevel(int l){
        level = l;
    }
    
    void print(){
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
        cout<<"name : "<<this->name<<endl;
    }
    
    void setName(char name[]){
        strcpy(this->name, name);
    }
};