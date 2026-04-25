#include <iostream>
using namespace std;

int main() {
    // copying a pointer
    int num = 5;
    int a = num;
    a++;
    
    int *p = &num;
    (*p)++;
    int *q = p;
    cout<<p<<"   "<<q;
	
}
