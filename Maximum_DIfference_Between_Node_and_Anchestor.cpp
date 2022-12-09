class Solution {
public:

    void solve(TreeNode* root,int mini,int maxi,int &ans){
        if(!root) return;
        ans=max({ans,root->val-mini,maxi-root->val});
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        solve(root->left,mini,maxi,ans);
        solve(root->right,mini,maxi,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
       int ans=0;
        solve(root,root->val,root->val,ans);
        return ans;

    }
};
