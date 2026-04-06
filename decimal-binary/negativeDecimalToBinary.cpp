#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // n&1
    // right shift
    // print the numbers in reverse order

    // ignore the negative sign
    // convert to binary
    // 1s complement -> negation
    // 2s complement -> or 1

    int n;
    cin>>n;
    int twos = (~n) + 1;


    int i = 0;
    int ans = 0; 

    while(twos!=0){
        int digit = twos&1;
        ans = (digit * pow(10, i)) + ans;
        twos = twos>>1;
        i++;
    }

    cout<<ans;

    return 0;
}