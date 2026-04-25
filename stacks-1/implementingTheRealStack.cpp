#include<iostream>
using namespace std;

class stack{ // can be implemented using arrays or even linked list
    public:
    int *arr;
    int top;
    int size;
    
    stack(int size){ // this is the constructor, and while creating the stack, we are calling the constructor only
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){ //O(1)
        if (top < size){ //size - top > 1
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    
    void pop(){ //O(1)
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
        
    }
    
    int peek(){ //O(1)
        if (top >= 0 && top < size)
        return arr[top];
        
        else{
            cout<<"stack index out of bounds"<<endl;
            
        }
        return -1;
        
        
    }
    
    bool isEmpty(){ //O(1)
        if (top == -1){
            return true;
        }
        else
        return false;
        
    }
    
};

int main(){
    stack st(15);
    
    st.push(22);
    st.push(43);
    st.push(44);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    
    
    return 0;
}


