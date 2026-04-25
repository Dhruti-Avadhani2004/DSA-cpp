// find triplets with the given sum

// 1 2 3 4 5
// sum = 12

#include<iostream>
using namespace std;

int main(){
    int target;
    cin>>target;
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        
    }
    
    int sumi = 0;
    int sumij = 0;
    int sumijk = 0;
    
    for(int i = 0; i < n; i++){
        sumi = arr[i];
        
        for(int j = i; j < n; j++){
            sumij = sumi + arr[j];
            
            for(int k = j; k < n; k++){
                sumijk = sumij + arr[k];
                if(sumijk == target){
                    if(sumi != sumij - sumi && sumij - sumi != sumijk - sumij && sumijk - sumij != sumi){
                        cout<<sumi<<" "<<sumij - sumi<<" "<<sumijk - sumij<<endl;
                    }
                    
                }
                else
                continue;
                
                
            }
        }
    }
    
    
    return 0;
}