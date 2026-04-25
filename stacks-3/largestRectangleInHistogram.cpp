/* BRUTE FORCE SOLUTION LEETCODE 89/99 TESTCASES PASSED

class Solution {
public:

    int blockArea(vector<int> heights, int x, int n){
        int y = x + 1;
        int z = x - 1;
        
        int area = 1;
        if(y < n && y > -1){
            while(y < n && heights[x] <= heights[y]){
            area++;
            y++;
            }
        }
        
        if(z > -1 && z < n){
            while(z > -1 && heights[x] <= heights[z]){
            area++;
            z--;
            }
        }
        

        return area * heights[x];

    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> areas;
        int x = 0;
        int n = heights.size();

        while(x < n){
            int new_area = blockArea(heights, x, n);
            areas.push_back(new_area);
            x++;
        }

        int max = 0;

        for(int i = 0; i < n; i++){
            if(areas[i] > max){
                max = areas[i];
            }

        }
        for(int i = 0; i < n; i++){
            cout<<areas[i]<<" ";
        }

        return max;
    
        

    }
};

*/


/*OPTIMIZED STACK IMPLEMENTATION APPROACH LEETCODE 99/99 TESTCASES PASSED

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> s;

        for(int i = 0; i < n; i++){
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if (s.empty()){
                left[i] = -1;
            }
            else{
                left[i] = s.top();
            }
            s.push(i);
        }  
        
        while(!s.empty()){
            s.pop();
        }      
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                right[i] = n;
            }
            else{
                right[i] = s.top();
            }
            s.push(i);
        }

        int maxArea = 0;
        for(int i = 0; i < n; i++){
            int width = right[i] - left[i] - 1;
            int area = width * heights[i];

            if(area > maxArea){
                maxArea = area;
            }
        }

        return maxArea;
        
    }
};


*/