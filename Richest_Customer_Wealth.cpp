class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int money=0;
        int nr=accounts.size(),nc=accounts[0].size();
        for(int i=0;i<nr;i++)
        {
            int temp=0;
            for(int j=0;j<nc;j++)
            {
                temp+=accounts[i][j];
            }
            if(temp>money)
            {
                money=temp;
            }
        }
        return money;
    }
};
