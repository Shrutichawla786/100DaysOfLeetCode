Q.733. Flood Fill
link-->https://leetcode.com/problems/flood-fill/description/
code->void dfs(int sr , int sc ,vector<vector<int>>&ans,vector<vector<int>>& image ,int newcolor , int inicolor ,int Delrow[] , int Delcol[] ){
        ans[sr][sc]=newcolor;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow=sr+Delrow[i];
            int ncol=sc+Delcol[i];
            if((nrow>=0 && nrow<n ) && (ncol>=0 &&ncol<m) &&image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor){
                dfs(nrow , ncol , ans , image , newcolor ,inicolor, Delrow, Delcol);
            }

        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>>ans =image;
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        dfs(sr , sc , ans , image , color , inicolor , delRow , delCol);
        return ans;
    }
