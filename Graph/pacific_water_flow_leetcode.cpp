Pacific Atlantic Water Flow leet code 

youtube : https://www.youtube.com/watch?v=vSz5sT5LeQQ&ab_channel=SeemantAggarwal

class Solution {
   private : void dfs(vector<vector<int>>& heights , int row , int col , vector<vector<int>>&ocean , int prev)
   {
       if( row<0 or col <0 or row >=heights.size() or col>= heights[0].size())
           return ;
       if(heights[row][col] < prev)
           return ;
       if(ocean[row][col] ==-1)
           return ;
       
       ocean[row][col] = -1 ;
       
       dfs(heights , row+1 , col , ocean , heights[row][col]);
       dfs(heights , row-1 , col , ocean , heights[row][col]);
       dfs(heights , row , col+1 , ocean , heights[row][col]);
       dfs(heights , row , col-1 , ocean , heights[row][col]);
       
   }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans ;
        if(heights.size() ==0)
            return ans ;
        
        vector<vector<int>> pacific(heights.size(), vector<int>(heights[0].size(),0));
        vector<vector<int>> atlantic(heights.size(), vector<int>(heights[0].size(),0));
        
        for(int col =0 ; col < heights[0].size() ; col++ )
        {
            dfs(heights , 0, col , pacific, INT_MIN);
            dfs(heights , heights.size()-1, col , atlantic, INT_MIN);
        }
        for(int row =0 ;  row< heights.size() ; row++ )
        {
            dfs(heights , row, 0 , pacific, INT_MIN);
            dfs(heights , row, heights[0].size()-1 , atlantic, INT_MIN);
        }
        vector<int> v;
        for(int i =0 ; i <heights.size() ; i++)
        {
            for(int j =0 ; j <heights[0].size() ; j++)
            {
                if(pacific[i][j] == -1 and pacific[i][j] == atlantic[i][j])
                {
                    v.clear();
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
                    
            }
        }
        return ans ;
    }
};
