class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(auto check:s)
        {
            m[check]++;
        }
        int rm=0;
        for(auto check:m)
        {
            if(check.second%2!=0)
                rm++;
        }
        if(rm>1)
            return s.size()-rm+1;
        return s.size();
    }
};
