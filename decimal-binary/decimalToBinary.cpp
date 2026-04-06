#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =0;
    int ans = 0;
    // 10^i * digit ) + ans
    
    while(n!=0){
        int digit = n&1; //gives the last digit
        ans = (digit * pow(10, i)) + ans;
        n = n>>1;
        i++;
        
        
    }
    
    cout<<ans;
    
    
    
    return 0;
}