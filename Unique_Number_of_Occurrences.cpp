class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set<int> s;
        for(auto a:arr)m[a]++;
        for(auto a:m)s.insert(a.second);
        return m.size()==s.size();
        
    }
};
