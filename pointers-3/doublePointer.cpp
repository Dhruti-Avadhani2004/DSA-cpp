#include <bits/stdc++.h>
using namespace std;

int main() {
	int value = 4;
	int *ptr = &value;
	int **ptr2 = &ptr;
	
	cout<<*ptr<<" "<<**ptr2<<" "<<value<<endl;

}

/*
OUTPUT
4 4 4

*/