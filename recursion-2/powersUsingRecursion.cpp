// using recursion, find a^b taking a and b input from the users


#include<iostream>
#include<vector>
using namespace std;

int powers(int a, int b){
    if(b == 0){
        return 1;
    }
    
    if (b == 1){
        return a;
    }
    
    if(b % 2 == 0){
        return (powers(a, b/2) * powers(a, b/2));
    }
    
    else if(b % 2 != 0){
        return (a * (powers(a, b/2)) * (powers(a, b/2)));
    }
    
    return -1;
}


int main(){
    cout<<"first enter base, and then space separated, enter power"<<endl;
    int a, b;
    cin>>a>>b;
    
    int ans = powers(a, b);
    cout<<ans;
    
    
    return 0;
}


/*MORE OPTIMIZED FUNCTION

// using recursion, find a^b taking a and b input from the users


#include<iostream>
#include<vector>
using namespace std;

int powers(int a, int b){
    //base case
    if(b == 0){
        return 1;
    }
    
    if (b == 1){
        return a;
    }
    
    //recursion
    int ans = powers(a, b/2);
    
    if(b % 2 == 0){
        return ans * ans;
    }
    else if(b % 2 != 0){
        return a * ans * ans;
    }
    
    return -1;
}


int main(){
    cout<<"first enter base, and then space separated, enter power"<<endl;
    int a, b;
    cin>>a>>b;
    
    int ans = powers(a, b);
    cout<<ans;
    
    
    return 0;
}
    
*/