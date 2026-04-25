/*SUBMITTED SOLUTION GEEKS FOR GEEKS*/

class Solution {
  public:
  
    bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& maze){
        if(x>=0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1){
            return true;
        }
        else
        return false;
    }
  
    void findPath(vector<vector<int>>& maze, vector<vector<int>>& visited, vector<string> &ans, int srcx, int srcy, int n, string path){
        //base case
        if(srcx == n - 1 && srcy == n - 1){
            ans.push_back(path);
            return;
        }
        
        visited[srcx][srcy] = 1;
        int newx;
        int newy;
        
        //looking for DOWN
        newx = srcx + 1;
        newy = srcy;
        if(isSafe(newx, newy, n, visited, maze)){
            path.push_back('D');
            findPath(maze, visited, ans, newx, newy, n, path);
            path.pop_back();
        }
        
        //looking for LEFT
        newx = srcx;
        newy = srcy - 1;
        if(isSafe(newx, newy, n, visited, maze)){
            path.push_back('L');
            findPath(maze, visited, ans, newx, newy, n, path);
            path.pop_back();
        }
        
        //looking for RIGHT
        newx = srcx;
        newy = srcy + 1;
        if(isSafe(newx, newy, n, visited, maze)){
            path.push_back('R');
            findPath(maze, visited, ans, newx, newy, n, path);
            path.pop_back();
        }
        
        //looking for UP
        newx = srcx - 1;
        newy = srcy;
        if(isSafe(newx, newy, n, visited, maze)){
            path.push_back('U');
            findPath(maze, visited, ans, newx, newy, n, path);
            path.pop_back();
        }
        
        visited[srcx][srcy] = 0;
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;
        int n = maze.size();
        vector<vector<int>> visited = maze;
        
        //fill the entire array with 0s
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path="";
        findPath(maze, visited, ans, srcx, srcy, n, path);
        return ans;
        
    }
};