#include <iostream>
using namespace std;

class hero{
    private:
    int health;
    
    public:
    char level;
    static int timeToComplete;
    
    //defualt constructor
    hero(){
        cout<<" default constructor called"<<endl;
    }
    
    //parameterized constructor
    hero(int health, char level){
        cout<<"this is the parameterized constructor"<<endl;;
        this->health = health;
        this->level = level;
    }
    
    //copy constructor
    hero(hero& temp){
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

    ~hero(){
        cout<<"destructor called"<<endl;
    }
};