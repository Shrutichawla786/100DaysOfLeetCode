Q.balanced-binary-tree
link-->https://leetcode.com/problems/balanced-binary-tree/description/
code->int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right= height(root->right);
        int ans= max(left , right)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool left= isBalanced(root->left);
        bool right= isBalanced(root->right);
        bool ans= abs(height(root->left)-height(root->right))<=1;
        if(ans && left && right){
            return true;
        }
        else{
            return false;
        }
        
    }
};
