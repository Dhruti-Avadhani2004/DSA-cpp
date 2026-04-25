#include<iostream>
using namespace std;

string valid(string sentence){
    
    string temp;
    for(int i = 0; i < sentence.length(); i++){
        if((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= '0' && sentence[i] <= '9')){
            temp.push_back(tolower(s[i]));
        }
        
    }
    
    return temp;
}

void reverseString(string &new_temp){
    int low = 0;
    int high = new_temp.length() - 1;
    while(low<=high){
        swap(new_temp[low], new_temp[high]);
        low++;
        high--;
    }
}

int main(){
    
    string sentence;
    getline(cin, sentence);
    
    string temp = valid(sentence);
    cout<<temp<<endl;
    
    string new_temp = temp;
    
    reverseString(new_temp);

    
    if (temp == new_temp){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
    
    
    
    return 0;
    
}


/*SUBMITTED SOLTUION

class Solution {
public:
    string valid(string s){
        string temp;
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                temp.push_back(tolower(s[i]));
            }
        }

        return temp;
    }

    void reverseString(string &new_temp){
        int low = 0;
        int high = new_temp.length() - 1;

        while(low <= high){
            swap(new_temp[low], new_temp[high]);
            low++;
            high--;
        }
    }

    bool isPalindrome(string s) {
        string temp = valid(s);
        string new_temp = temp;
        reverseString(new_temp);
        if(new_temp == temp){
            return true;
        }
        else{
            return false;
        }

        
    }
};

*/