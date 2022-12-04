class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        sort(s.begin(),s.end());
        int n=s.size();
        int prev=s[0]+s[n-1];
        int f=1,e=n-2;
        long long sum=s[0]*s[n-1];
        while(f<=e)
        {
            int nw=s[f]+s[e];
            if(prev==nw)
            {sum+=s[f]*s[e];}
            else
                return -1;
            f++;e--;
        }
        return sum;
        
    }
};
