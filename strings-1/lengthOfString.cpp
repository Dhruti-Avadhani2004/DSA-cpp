#include<iostream>
using namespace std;

int stringLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    
    int length = stringLength(name);
    cout<<length<<endl;
    
    cout<<"your name is ";
    cout<<name;
    
    
    return 0;
}