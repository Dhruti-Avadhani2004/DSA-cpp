#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i = 5;
	int *ptr = &i;
	cout<<*ptr<<endl; // dereferencing operator - printing the value at the location where the pointer is pointing
	cout<<ptr<<endl; // prints the address of i
	cout<<&ptr;// prints the address of ptr

}


/*
OUTPUT
5
0x7ffd37315a14
0x7ffd37315a18

*/
