#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[1];
    cout<<&arr<<"  "<<*ptr<<"  "<<ptr<<endl;
    ptr--;
    cout<<*ptr<<"  "<<ptr<<endl;
    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<(*arr + 1)<<endl;
    cout<<(*arr) + 1<<endl;
    cout<<*(arr + 1)<<endl;
    
    int i = 3;
    cout<<i[arr]<<endl;
  
}

/*OUTPUT
0x7fffdf6165f0  2  0x7fffdf6165f4
1  0x7fffdf6165f0
1
2
2
2
2
4

    */