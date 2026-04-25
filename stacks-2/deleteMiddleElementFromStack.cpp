#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s1;
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int ele;
        cout<<"enter element";
        cin>>ele;
        s1.push(ele);
        cout<<"element pushed"<<endl;
    }
    
    printStack(s1);
    cout << endl;
    cout << endl;
    
    int siize = s1.size();
    int mid = siize / 2;
    
    stack<int> copy;
    
    for(int i = 0; i < mid; i++){
        int temp = s1.top();
        s1.pop();
        copy.push(temp);
    }
    
    printStack(s1);
    cout << endl;
    cout << endl;
    
    s1.pop();
    
    while(!copy.empty()){
        int temp = copy.top();
        copy.pop();
        s1.push(temp);
    }
    
    printStack(s1);
    
    
    
    
    return 0;
}

/*
SUBMITTED CODE CODE360

#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   stack<int> copy;
   int siize = inputStack.size();
   int mid = (N) / 2;

   for(int i = 0; i < mid; i++){
      int temp = inputStack.top();
      inputStack.pop();
      copy.push(temp);
      
   }

   inputStack.pop();

   while(!copy.empty()){
      int temp = copy.top();
      copy.pop();
      inputStack.push(temp);
      
   }

   

   
}
   
*/