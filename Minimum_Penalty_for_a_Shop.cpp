class Solution {
public:
    int bestClosingTime(string customers) {
        int len=customers.size();
        int mx=0,index=0;
        pair<int,int> count={0,0};
        for(int i=0;i<len;i++)
        {
            if(customers[i]=='Y')
            {
                count.first++;
                count.second=i+1;
            }
            else
            {
                count.first--;
                count.second=i;
            }
            if(count.first>mx)
            {
                index=count.second;
            }
            mx=max(mx,count.first);
        }
        return index;
    }
};
