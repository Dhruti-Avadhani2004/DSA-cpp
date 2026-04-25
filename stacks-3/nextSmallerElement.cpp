/*SUBMITTED SUB-OPTIMAL SOLUTION CODE360

#include <vector>
#include <stack>
#include <algorithm>

vector<int> solution(stack<int> s, int x, vector<int> &ans){
    
    if(s.top() < x){
        ans.push_back(s.top());
    }
    else{
        while(s.top() >= x){
            s.pop();
        }
        if(s.top() < x){
            ans.push_back(s.top());
        }
    }

    return ans;


}

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    vector<int> ans;

    s.push(-1);
    stack<int> temp;
    for(int i = 0; i < n; i++){
        temp.push(arr[i]);
    }

    for(int i = 0; i < n; i++){
        int x = temp.top();
        ans = solution(s, x, ans);
        s.push(x);
        temp.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
    
}
    
*/

