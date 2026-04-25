#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s1;
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        char temp;
        cin>>temp;
        if(temp == '(' || temp == '{' || temp == '['){
            s1.push(temp);
        }
        else if(temp == ')'){
            if(s1.top() == '('){
                s1.pop();
            }
        }
        
        else if(temp == '}'){
            if(s1.top() == '{'){
                s1.pop();
            }
        }
        
        else if(temp == ']'){
            if(s1.top() == '['){
                s1.pop();
            }
        }
    }
    
    if(s1.empty()){
        cout<<"balanced"<<endl;
    }
    else
    cout<<"not balanced"<<endl;
    
    
    return 0;
}

/*
SUBMITTED SOLUTION CODE 360

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> s1;
    for(int i = 0; i < s.length(); i++){
        char temp = s[i];
        if(temp == '(' || temp == '{' || temp == '['){
            s1.push(temp);
        }
        else if(temp == ')' && !s1.empty()){
            if(s1.top() == '('){
                s1.pop();
            }
        }

        else if(temp == '}'&& !s1.empty()){
            if(s1.top() == '{'){
                s1.pop();

            }
        }

        else if(temp == ']'&& !s1.empty()){
            if(s1.top() == '['){
                s1.pop();
            }
        }

        else if((temp == ')' || temp == '}' || temp == ']') && s1.empty()){
            return false;
        }
    }

    if(s1.empty()){
        return true;
    }
    else
    return false;
}
    
*/