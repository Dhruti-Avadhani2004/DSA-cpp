/*SUBMITTED CODE CODE360
#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  //checking for odd
  if(str.length() % 2 != 0){
    return -1;
  }

  //removing valid string
  stack<char> stack;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '{'){
      stack.push(str[i]);
    }
    else if(!stack.empty() && str[i] == '}' && stack.top() == '{'){
      stack.pop();
    }

    else if(!stack.empty() && str[i] == '}' && stack.top() != '{'){
      stack.push(str[i]);
    }

    else if(stack.empty() && str[i] == '}'){
      stack.push(str[i]);
    }
  }

  //count the number of everything in the stack
  int a = 0; // no of {
  int b = 0; // no of }

  while(!stack.empty()){
    if(stack.top() == '{'){
      a++;
      stack.pop();
    }
    else if(stack.top() == '}'){
      b++;
      stack.pop();
    }

  }

  //condition for answer
  if ((a + b) % 2 != 0){
    return -1;
  }

  int min_cost = ((a + 1)/2) + ((b + 1)/2);
  return min_cost;

}
  
*/