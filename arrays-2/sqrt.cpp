// give the sqrt of a number given an input, only int'
// works only for perfect squares

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n){
    int low = 0;
    int high = n - 1;
    int mid;
    
    while(low<=high){
        mid = low + ((high - low)/2);
        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid < n){
            low = mid + 1;
        }
        else if(mid * mid > n){
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n = 37;
    int arr[n];
    int one = 1;
    for(int i = 0; i < n; i++){
        arr[i] = one;
        one++;
    }
    
    int ans = binarySearch(arr, n);
    cout<<ans;
    
    
    return 0;
}


/*
LEETCODE SUBMITTED SOLUTION
class Solution {
public:

    long long int binarySearch(int x){
        int low = 0;
        int high = x;
        long long int mid;
        long long int ans = 0;

        while(low <= high){
            mid = low + ((high - low)/2);
            if(mid * mid == x){
                return mid;
            }
            else if(mid * mid > x){
                high = mid - 1;
            }
            else if(mid * mid < x){
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;

    }
    int mySqrt(int x) {
        

        

        return binarySearch(x);
        
    }
};
*/