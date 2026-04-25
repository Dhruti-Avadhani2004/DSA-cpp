/*LEETCODE SOLUTION YET TO SUBMIT*/

class Solution {
public:

    void permutations(vector<int> nums, vector<vector<int>> &ans, int index){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        //performing swapping function
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            permutations(nums, ans, index + 1); //recursion call
            //backtracking
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> ans;
        permutations(nums, ans, index);
        return ans;
        
    }
};