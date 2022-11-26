class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int> zr(m,0);
        vector<int> zc(n,0);
        vector<int> oner(m,0);
        vector<int> onec(n,0);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    oner[i]+=1;
                    onec[j]+=1;
                }
                else
                {
                    zr[i]+=1;
                    zc[j]+=1;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=oner[i]+onec[j]-zr[i]-zc[j];
            }
        }
        return grid;
    }
};
