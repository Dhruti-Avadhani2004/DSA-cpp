/*SUBMITTED CODE CODE360
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> stack;
    bool red = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*'){
            stack.push(s[i]);
        }

        else if(s[i] == ')' && stack.top() != '('){
            while(stack.top() != '('){
                
                if(stack.top() == '+' || stack.top() == '-' || stack.top() == '/' || stack.top() == '*'){
                    stack.pop();
                    red = false;
                }
                else{
                    stack.pop();
                    red = true;
                    return red;
                }
            }
            stack.pop();

        }

        else if(s[i] == ')' && stack.top() == '('){
            stack.pop();
            red = true;
            return red;
        }
    }
    return red;
}


*/