class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                int tmp=nums[i];
                nums[i]=nums[a];
                nums[a]=tmp;
                a++;
            }
        }
    }
};
