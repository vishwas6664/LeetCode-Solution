class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int f=0,e=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                f++;
        }
        for(int i=n/2;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                e++;
        }
        if(f==e)
            return true;
        else
            return false;
    }
};
