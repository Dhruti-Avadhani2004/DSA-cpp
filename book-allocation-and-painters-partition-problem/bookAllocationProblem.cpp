// book allocation problem

#include<iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int mid){
    // is valid = ? 
    // if students = m after allocating all books to students. then it is valid
    // else it is invalid
    int students = 1;
    int sum = 0;
    int ans = -1;
    
    for(int i = 0; i < n; i++){
        if(sum + arr[i] <= mid){
            sum = sum + arr[i];
            ans = mid;
        }
        else{
            students++;
            sum = arr[i];
        }
        
    }
    if (students <= m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int n, m;
    // n = no of books
    // m = no of students
    cin>>n>>m;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    // do a binary search code
    
    int low = 0;
    int high = 0;
    for(int i = 0; i < n; i++){
        high = high + arr[i];
    }
    int mid;
    int ans = -1;
    
    while(low <= high){
        mid = low + ((high - low)/2);
        if(isValid(arr, n, m, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1; 
        }
    }
    
    cout<<ans;
    
    
    return 0;
}

/*
SUBMITTED CODE ON CODE STUDIO
bool isValid(vector<int>& arr, int n, int m, int mid){

    if(m > n){
        return false;
    }

    int sum = 0;
    int students = 1;


    for(int i = 0; i < n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(sum + arr[i] <= mid){
            
            sum = sum + arr[i];
        }
        else{
            students++;
            sum = arr[i];
        }
    }

    if(students <= m){
        return true;
    }
    else{
        return false;
    }


    

}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    // int low = *max_element(arr.begin(), arr.end()); 
    int low = 0;
    int high = 0;
    for(int i = 0; i < n; i++){
        high = high + arr[i];
    }

    int mid;
    int ans = -1;

    while(low<=high){
        mid = low + ((high - low)/2);
        if(isValid(arr, n, m, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    return ans;
}
*/