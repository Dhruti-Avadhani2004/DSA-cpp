// find intersection of two given arrays
// if common element is not present, return -1
// numbers are ordered in non descending order

//1 2 3
//3 4 => op = 3

// 1 2 2 3 3 4
// 2 2 3 4 4 5 => op = 2 2 3 4

// ek element ek ke sath hi map hoga, duplicates nahi karni
// for that, once intersection is done, mark it to some random integer
//# most optimized solution without using 2 for loops

#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int a;
    int b;
    cin>>a>>b;
    
    int arr1[a];
    int arr2[b];
    
    for (int i = 0; i < a; i++){
        cin>>arr1[i];
    }
    
    for (int i = 0; i < b; i++){
        cin>>arr2[i];
    }
    
    // assuming that array a > b always
    
    int i = 0;
    int j = 0;
    int flag = 1;
    
    if (a == 1 && b == 1){
        if (arr1[0] == arr2[0]){
            cout<<arr2[0];
            flag = 0;
        }
        else
        cout<<-1;
        return 0;
        

    }
    
    while(i < a){
        if(arr1[i] < arr2[j]){
            i++;
            
        }
        if(arr1[i] > arr2[j]){
            j++;
            
        }
        if(arr1[i] == arr2[j]){
            cout<<arr2[j];
            arr2[j] = INT_MIN;
            i++;
            j++;
            flag = 0;
        }
        
        
        
    }
    if(flag)
        cout<<-1;
    


    
    return 0;
}


/*
SUBMITTED ANSWER

#include <bits/stdc++.h> 
#include<climits>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	int i = 0;
	int j = 0;
	int flag = 1;

	while(i < n && j < m){
		if(arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i] > arr2[j]){
			j++;
		}
		else
			i++;
	}

	return ans;
}

*/