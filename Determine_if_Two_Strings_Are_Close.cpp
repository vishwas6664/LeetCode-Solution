class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> a(26,0),b(26,0);
        set<int> s1,s2;
        for(auto c:word1)
        {
            a[c-'a']++;
            s1.insert(c);
        }
        for(auto c:word2)
        {
            b[c-'a']++;
            s2.insert(c);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b&&s1==s2;
    }
};
