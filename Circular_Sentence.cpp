class Solution {
public:
    bool isCircularSentence(string s) {
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(s[i-1]!=s[i+1])
                    flag=false;
            }
        }
        return s[0]==s[s.size()-1]&&flag;
        
    }
};
