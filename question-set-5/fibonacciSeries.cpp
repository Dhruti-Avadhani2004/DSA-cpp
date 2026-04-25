// fibonacci / pingala series
// 0 1 1 2 3 5 8 ...

#include<iostream>
using namespace std;

int fibonacci(int n){
    // fn = fn-1 + fn-2
    if(n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci (n - 2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    int ans = fibonacci(n);
    cout<<ans;
    
    
    return 0;
}

/*
SUBMITTED SOLUTION LEETCODE

class Solution {
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        int ans = fib(n - 1) + fib(n - 2);
        return ans;
        
    }
};

*/