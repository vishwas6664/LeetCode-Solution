class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            int x=count(nums.begin(),nums.end(),nums[i]);
            if(x>=2)
                return true;
        }
        return false;
    }
};
