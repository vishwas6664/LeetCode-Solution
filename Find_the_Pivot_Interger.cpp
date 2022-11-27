class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int i=n;i>0;i--)
        {
            sum+=i;
            int sm=((i)*(i+1))/2;
            if(sm==sum)
                return i;
        }
        return -1;
            
    }
};
