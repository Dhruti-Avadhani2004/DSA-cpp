#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    char grade;
    
    public:
    int getAge(){
        return age;
    }
    
    void setAge(int a){
        age = a;
    }
    
};

int main(){
    
    student s1;
    s1.setAge(10);
    cout<<s1.getAge();
    
    
    
    return 0;
    
}