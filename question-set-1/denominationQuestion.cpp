// total amount is rupees 1330. how many 100 rupee notes, 
// 50 rupee notes, 20 rupee 
// notes and 1 rupee notes do you need to make this amount?

#include<iostream>
using namespace std;

int main (){
    
    int n = 1330;
    int hund = 0;
    int fifty = 0;
    int twenty = 0;
    int one = 0;
    
    while(1){
        if(n - 100 >= 0){
            n = n - 100;
            hund++;
            continue;
        }
        break;
    }
    
    while(1){
        if(n - 50 >= 0){
            n = n - 50;
            fifty++;
            continue;
        }
        break;
    }
    
    while(1){
        if(n - 20 >= 0){
            n = n - 20;
            twenty++;
            continue;
        }
        break;
    }
    
    while(1){
        if(n - 1 >= 0){
            n = n - 1;
            one++;
            continue;
        }
        break;
    }



    cout<<"total number of notes required is as follows\n100: "<<hund<<"\n 50: "<<fifty<<"\n 20: "<<twenty<<"\n one: "<<one;
    
    
    
    return 0;
}