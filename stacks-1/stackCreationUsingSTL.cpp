#include<iostream>
#include<stack>
using namespace std;

int main(){
    //ceation of stack
    stack <int> s;
    
    //push elements
    s.push(2);
    s.push(3);
    cout<<s.size()<<" is the size of the stack"<<endl;
    
    //pop elements
    s.pop();
    
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<" is the size of the stack"<<endl;
    
    
    return 0;
}