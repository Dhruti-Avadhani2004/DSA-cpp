/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    if (x >= 0){
        int length = 0;
        int temp = x;
        while(temp != 0){
            length++;
            temp = temp / 10;
        }
        int i = length - 1;
        int p = 1;
        for(int k = 0; k < i; k++){
            p = p * 10;
        }
        
        int temp2 = x;
        int ans = 0;
        while (temp2 != 0){
            int digit = temp2 % 10;
            ans = ans + digit * p;
            i--;
            p = p / 10;
            temp2 = temp2 / 10;
            if (ans > 214748364)
                return 0;

            if (ans < -214748364)
                return 0;


        }
        cout<<ans;

        // x= 123
        // 321
    }

    if(x < 0){
        x = x * -1;
        int length = 0;
        int ans = 0;
        int temp = x;
        while(temp != 0){
            length++;
            temp = temp / 10;
        }
        int i = length - 1;
        int p = 1;
        for(int k = 0; k < i; k++){
            p = p * 10;
        }
        int temp2 = x;
        while(temp2!=0){
            int digit = temp2 % 10;
            ans = ans + digit * p;
            p = p / 10;
            i--;
            temp2 = temp2 / 10;

            if (ans > 214748364)
                return 0;

            if (ans < -214748364)
                return 0;
        }

        ans = ans * -1;
        cout<<ans;
    }


    return 0;
}

/*LEECODE SOLUTION
class Solution {
public:
    int reverse(int x) {


        if (x >= 0){
            long length = 0;
            long temp = x;
            long p = 1;
            while(temp != 0){
                length++;
                temp = temp / 10;

            }
            long i = length - 1;
            
            for(int k = 0; k < i; k++){
                p = p * 10;
            }

            long temp2 = x;
            long ans = 0;
            while(temp2!=0){
                long digit = temp2 % 10;
                
                ans = ans + (digit * p);
                if (ans > 2147483647 || ans < -2147483648)
                return 0;
                p = p / 10;
                temp2 = temp2 / 10;
                


            }
            return ans;
        }

        if (x < 0){
            long temp = (long)x * -1;
            long length = 0;
            long p = 1;
            while(temp != 0){
                length++;
                temp = temp / 10;

            }
            long i = length - 1;
            
            for(int k = 0; k < i; k++){
                p = p * 10;
            }

            long temp2 = (long)x * -1;
            long ans = 0;
            while(temp2!=0){
                long digit = temp2 % 10;
                
                ans = ans + (digit * p);
                if (ans > 2147483647 || ans < -2147483648)
                return 0;
                p = p / 10;
                temp2 = temp2 / 10;
                


            }
            return (ans * -1);

        }
    return 0;    
    }
};

*/

