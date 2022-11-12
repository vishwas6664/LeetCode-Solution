class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> s;
        sort(nums.begin(),nums.end());
        int f=0,e=nums.size()-1;
        while(f<=e)
        {
            float avg=(nums[f]+nums[e])/2.0;
            s.insert(avg);
            f++;e--;
        }
        return s.size();
        
    }
};
