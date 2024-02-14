Q.378. Kth Smallest Element in a Sorted Matrix
link-->https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/
code-->int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n= matrix.size();
        vector<int>v;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
                
            }
        }
        sort(v.begin() , v.end());
        return(v[k-1]);
    }
