// IMPLEMENT TWO STACKS IN AN ARRAY
#include<iostream>
using namespace std;

class twoStacks{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    
    twoStacks(int s){
        this->size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
        
    }
    
    void push1(int element){
        if (top2 - top1 > 1){
            // atleast ek empty space toh present hai
            top1++;
            arr[top1] = element;
        }
        else
        cout<<"stack1 overflow"<<endl;
    }
    
    void push2(int element){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = element;
        }
        else
        cout<<"stack2 overflow"<<endl;
    }
    
    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        return -1;
    }
    
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        return -1;
    }
    
};


int main(){
    
    
    return 0;
}


/*SUBMITTED CODE CODE360

#include <bits/stdc++.h> 
class TwoStack {

public:
    int *arr;
    int top1;
    int top2;
    int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        return -1;
    }
};


*/