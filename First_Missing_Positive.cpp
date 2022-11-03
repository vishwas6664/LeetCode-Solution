class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int> m;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {s.insert(nums[i]);}
        }
        int i=1;
        for(auto a:s)
        {
            if(a!=i)
                return i;
            i++;
        }
        return s.size()+1;
    }
};
