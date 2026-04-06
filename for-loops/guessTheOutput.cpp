#include<iostream>
using namespace std;

int main(){

    int a, b = 1;
    a = 10;
    if (++a)
        cout << b;
    else
        cout << ++b;

    return 0;
}

/*
a = 1, b = 1
a = 10
++a = true
output: 1
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if(a-- > 0 && ++b > 2 ){
    cout << "Stage1 - Inside If ";
    } else{
    cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}

/*
a = 1, b = 1
1 > 0, a = 0 ----> true
3 > 0, b = 3 ----> true
output: Stage1 - Inside If
        0 3
        
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2 ){
    cout << "Stage1 - Inside If ";
    } else{
    cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2 ){
        cout << "Stage1 - Inside If ";
    } else{
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2 ){
    cout << "Stage1 - Inside If ";
    } else{
    cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}
