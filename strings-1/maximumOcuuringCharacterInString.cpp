//maximum recurring character in string



#include<iostream>
using namespace std;

void count (int arr[], string data){
    for(int i = 0; i < data.length(); i++){
        if(data[i] >= 'a' && data[i] <= 'z'){
            int number = data[i] - 'a';
            arr[number]++;
        }
        else{
            int number = data[i] - 'A';
            arr[number]++;
        }
    }
}


int main(){
    string data;
    getline(cin, data);
    
    int arr[26] = {0};
    
    count(arr, data);
    
    int max = arr[0];
    
    for(int i = 0; i < 26; i++){
        if (arr[i] > max){
            max = i;
        }
    }
    
    

    
    
    
    return 0;
}