class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto a:nums)
        {ans.push_back(pow(a,2));}
        sort(ans.begin(),ans.end());
        return ans;
    }
};
