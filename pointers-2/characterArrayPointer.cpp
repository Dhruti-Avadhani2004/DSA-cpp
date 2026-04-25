#include <iostream>
using namespace std;
int main(){
    char ch[6] = "abcde";
    char *ptr = &ch[0];
    cout<<ptr<<endl;
    
    int arr[5] = {1,2,3,4,5};
    int *ptr2 = &arr[0];
    cout<<ptr2<<endl;
    
    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;// prints until it finds a null character
  
}


/*OUTPUT
abcde
0x7ffe0e3915f0
zabcde
*/