class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f=0,e=numbers.size()-1;
        while(f<=e)
        {
            int sum=numbers[f]+numbers[e];
            if(sum>target)
                e--;
            else if(sum<target)
                f++;
            else
                return {f+1,e+1};
        }
        return {0,0};
    }
};
