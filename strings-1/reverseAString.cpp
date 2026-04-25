#include<iostream>
using namespace std;

void reverseString(char name[]){
    int i = 0;
    int count = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    
    int start = 0;
    int end = count - 1;
    
    while(start <= end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main(){
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    
    cout<<"your name is ";
    cout<<name<<endl;;
    
    reverseString(name);
    cout<<name;
    
    
    return 0;
}

/*SUBMITTED SOLUTION LEETCODE

class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0;
        int high = s.size() - 1;
        while(low <= high){
            swap(s[low], s[high]);
            low++;
            high--;
        }
        
    }
};

*/