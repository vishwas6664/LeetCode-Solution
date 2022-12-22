class Solution {
public:
    string toLowerCase(string s) {
        string str;
        for(auto& c:s)
        {
            c=tolower(c);
        }
        return s;
    }
};
