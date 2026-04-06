#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // n = 1011
    // 1 -> if 1 then 2^i * 1 and add to ans
    // 0 -> if 0 then 2^i * 0 and add to ans
    int i = 0;
    int ans = 0;

    while(n!=0){
        int digit = n % 10; //0
        ans = ans + (digit * pow(2, i));
        n = n / 10; // 10
        i++;
    }

    cout<<ans;
    return 0;
}