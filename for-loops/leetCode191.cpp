/*Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.*/


#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n;
    cin>>n;
    bitset<64> b = n;
    cout<<b<<"\n";
    int count = 0;
    for (int i = 0; i < 64; i++){
        if (b[i] == 1){
            count++;
        }
        
    }
    cout<<count;


}
//LEETCODE SOLUTION
/*
#include<bitset>
class Solution {
public:
    int hammingWeight(int n) {
        bitset<64> b = n;
        int count = 0;
        for(int i = 0; i < 64; i++){
            if (b[i] == 1){
                count++;
            }
        }
    return count;
        
    }
};
*/