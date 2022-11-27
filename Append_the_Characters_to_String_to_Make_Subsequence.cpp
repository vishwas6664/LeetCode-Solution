class Solution {
public:
    int appendCharacters(string s, string t) {
        int ls=s.size(),lt=t.size()
            int j=0;
            for(int i=0;i<ls;i++)
            {
                if(s[i]==t[j])
                    j++;
                if(j==lt)return 0;
            }
            return lt-j;
    }
};
