#include<iostream>
using namespace std;

class human{ // parent class
  public:
  int height;
  int weight;
  int age;
  
  public:
  int getAge(){
      return age;
  }
  
  void setWeight(int w){
      weight = w;
  }
};

class male: public human{ // child male inherits from parent human
    public:
    string color;
    
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    
};


int main(){
    male m1;
    m1.age = 20;
    m1.color = "black";
    m1.sleep();
    m1.setWeight(95);
    
    cout<<m1.age<<" "<<m1.color<<" "<<m1.weight<<endl;
    
    
    return 0;
}




















