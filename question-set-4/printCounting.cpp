// print counting
#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n - 1);
}

int main (){
    int n;
    cin>>n;
    
    print(n);
    // print n, n-1, n-2n n-3... upto 1
    
    return 0;
}