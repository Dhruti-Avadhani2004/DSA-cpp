// given an integer number n, return the difference
// between the product of its digits and the sum of its digits. 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n here: ";
    cin>>n;
    int sum = 0;
    int product = 1;
    int temp = n;
    
    // a = 456
    // 456%10 = 6 --> temp
    // a = 45 = quotient
    
    while(n != 0){
        int temp = n%10;
        sum = sum + temp;
        cout<<sum<<"\n";
        n = n / 10;
        cout<<n<<"\n";
        
    }
    
    n = temp;
    
    while(n != 0){
        int temp = n%10;
        product = product * temp;
        cout<<product<<"\n";
        n = n / 10;
        cout<<n<<"\n";
    }
    
    int difference = product - sum;
    cout<<"the difference between the product and the sum of the digits is "<<difference;
    
    
    return 0;
}

/*
LEETCODE SUBMISSION
class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int sum = 0;
        int prod = 1;

        while(n!=0){
            int temp = n%10;
            sum = sum + temp;
            n = n / 10;

        }

        n = temp;
        
        while(n!=0){
            int temp = n%10;
            prod = prod * temp;
            n = n /10;
        }

        return (prod - sum);

        
    }
};

*/