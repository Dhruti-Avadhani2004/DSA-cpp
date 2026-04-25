// insert element at the bottom of the stack

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s1){
    int len = s1.size();
    for(int i = 0; i < len; i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s1;
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        s1.push(temp);
    }
    
    print(s1);
    
    int newElement;
    cin>>newElement;
    
    stack<int> copy;
    while(!s1.empty()){
        int temp = s1.top();
        copy.push(temp);
        s1.pop();
    }
    
    s1.push(newElement);
    
    while(!copy.empty()){
        int temp = copy.top();
        s1.push(temp);
        copy.pop();
    }
    
    print (s1);
    
    
    
    
    return 0;
}



/*SUBMITTED CODE CODE360

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> copy;

    while(!myStack.empty()){
        int temp = myStack.top();
        copy.push(temp);
        myStack.pop();
    }

    myStack.push(x);

    while(!copy.empty()){
        int temp = copy.top();
        myStack.push(temp);
        copy.pop();
    }

    return myStack;
}


*/


