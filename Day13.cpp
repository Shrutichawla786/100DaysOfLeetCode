Q.74. Search a 2D Matrix
link-->https://leetcode.com/problems/search-a-2d-matrix/description/
code-->bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
O(n*m)
O(1)
