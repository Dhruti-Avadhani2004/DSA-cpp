/*SUBMITTED SOLUTION CODE360 
#include <bits/stdc++.h> 

void sortedStack(stack<int> &stack, int num){
	//base case
	if(stack.empty() || stack.top() < num){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	//recursive call
	sortedStack(stack, num);

	stack.push(n);


}

void sortStack(stack<int> &stack)
{
	//base case
	if (stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedStack(stack, num);

	
}
    
*/