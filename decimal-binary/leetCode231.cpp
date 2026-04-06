/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1*/

// 8 - 2*2*2
// 6 - 2*3

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int flag = 0;
    while(temp != 1){
        if(temp % 2 == 0){
            temp = temp / 2;
            // cout<<temp;
            // cout<<"true";
            continue;
            
        }
        if(temp != 1)
            break;
        
    }

    if(temp == 1)
        flag = 1;

    if(flag == 0){
        cout<<"False";
    }
    else
        cout<<"True";


    return 0;
}

/*LEETCODE SUBMISSION

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0)
            return 0;
        if (n == 0)
            return 0;
        int temp = n;
        int flag = 0;
        while(temp!=1){
            if(temp % 2 == 0){
                temp = temp / 2;
                continue;

            }
            if (temp != 1)
                break;
        }

        if(temp == 1)
            flag = 1;

        if(flag == 0)
            return 0;
        else
            return 1;

        return 0;
        
    }
};

*/