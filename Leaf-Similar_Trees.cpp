class Solution {
public:
    void solve(TreeNode * &root, vector<int>&arr){
        //base case
        if(root==NULL)return;
        
        //if node is leaf node
        if(root->left ==NULL && root->right==NULL){
            arr.push_back(root->val);
            return;
        }
        solve(root->left,arr);
        solve(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        solve(root1,v1);
        solve(root2,v2);
        return v1==v2;
    }
};
