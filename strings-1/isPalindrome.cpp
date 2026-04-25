// PALINDROME
#include<iostream>
using namespace std;

bool isPalindrome(char arr[]){
    int i = 0;
    int count = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    
    char cp1[count];
    for(int i = 0; i < count; i++){
        cp1[i] = arr[i];
    }
    
    char cp2[count];
    for(int i = 0; i < count; i++){
        cp2[i] = arr[i];
    }
    
    int low = 0;
    int high = count - 1;
    while(low <= high){
        swap(cp1[low], cp2[high]);
        low++;
        high--;
    }
    
    for(int i = 0; i < count; i++){
        if(cp1[i] == cp2[i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char name[20];
    cin>>name;
    
    cout<<isPalindrome(name);
    
    
    return 0;
}


