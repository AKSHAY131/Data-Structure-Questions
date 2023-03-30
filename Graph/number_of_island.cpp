leet code 
solution : https://leetcode.com/problems/number-of-islands/discuss/501000/C%2B%2B-Simple-DFS-beats-100-in-memory-Detailed-Explanantion
class Solution {
    private :
    
    void dfs(int row , int col , int n , int m , vector<vector<char>>& grid)
    {
        if(row <0 or col <0 or row >=n or col >=m or (grid[row][col] == '0') or (grid[row][col] =='2') )
            return ;
        grid[row][col] = '2';
        
        dfs(row+1 , col , n , m , grid);
        dfs(row-1 , col , n , m , grid);
        dfs(row , col+1 , n , m , grid);
        dfs(row , col-1 , n , m , grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        
        int island = 0 ;
         for(int i =0 ; i <n ; i++)
        {
            for(int j =0 ; j <m ; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(i , j , n , m , grid) ;
                    ++island;
                }
            }
        }
        return island ;
    }
};