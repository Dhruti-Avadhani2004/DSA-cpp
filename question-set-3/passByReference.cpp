#include <iostream>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){ //using a reference variable so that it can be accessed and it is passed as reference and not as pass by value
    n++;
}

int main() {


    int n = 5;
    cout<<n<<endl;
    update1(n);
    cout<<n<<endl;
    
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
    
    
    

}

/*
OUTPUT
Your Output
5
5
5
6
*/
