/*SUBMITTED SOLUTION LEETCODE*/

class Solution {
public:

    void phone(string digits, int index, vector<string> &ans, string output, string mapping[]){
        //base case
        if (index >= digits.length()){
            ans.push_back(output);
            return;
        }

        //handle the mapping 
        int num = digits[index] - '0';
        string value = mapping[num];

        //value = "abc";
        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            phone(digits, index + 1, ans, output, mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int index = 0;
        vector<string> ans;
        string output;
        string mapping [10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        phone(digits, index, ans, output, mapping);
        return ans;
        
    }
};