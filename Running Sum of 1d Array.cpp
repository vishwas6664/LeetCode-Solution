class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> ans;
        for(auto a:nums)
        {
            sum+=a;
            ans.push_back(sum);
        }
        return ans;
    }
};
