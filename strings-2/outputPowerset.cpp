//LEETCODE 78 SUBSETS
//Find the power set of a given array

class Solution {
public:

    void powerSet(vector<int> nums, vector<int> object, int index, vector<vector<int>> &ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(object);
            return;
        }

        // exclude case
        powerSet(nums, object, index+1, ans);

        //include case
        int element = nums[index];
        object.push_back(element);
        powerSet(nums, object, index+1, ans);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> object;
        int index = 0;
        powerSet(nums, object, index, ans);
        return ans;
        
    }
};