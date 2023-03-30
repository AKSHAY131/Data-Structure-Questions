link : https://leetcode.com/problems/search-a-2d-matrix/discuss/1895837/C%2B%2B-BINARY-SEARCH-TREE-(**)-Explained-with-IMG

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        int row = 0 ;
        int col = cols-1 ;
        
        while(row < rows and col > -1)
        {
            int value = matrix[row][col];
            if(value == target)
                return true ;
            if(target > value )
                row++;
            else col--;
        }
        return false ;
    }
};