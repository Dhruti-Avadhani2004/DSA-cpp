// nCr
// n! / r! * (n-r)!
// write a program using functions to calculate nCr given n and r

#include<iostream>
using namespace std;

int combn (int n, int r){
    if(r > n)
        return 0;
    
    int tempn = 1;
    
    if(n == 0){
        tempn = 1;
    }
    else{
        for(int i = n; i >= 1; i--){
            tempn = tempn * i;
        }
        
        
    }
    
    // tempn = n fact
    
    int tempr = 1;
    if(r == 0){
        tempr = 1;
    }
    else{
        for(int i = r; i >= 1; i--){
            tempr = i * tempr;
        }
        
        
    }
    
    // tempr = r fact
    
    int tempnr = 1;
    if(n - r == 0){
        tempnr = 1;
    }
    else{
        for(int i = (n - r); i >= 1; i--){
            tempnr = i * tempnr;
        }
        
        
    }
    
    // tempnr = n - r fact
    
    int den = tempnr * tempr;
    int ans = tempn / den;
    return ans;
}

int main (){
    int n;
    int r;
    cin>>n;
    cin>>r;
    
    int c = combn(n, r);
    cout<<"the combination of n and r is: "<<c;
    
    
    
    return 0;
}