class Solution {
public:
    int minPartitions(string n) {
        char max='0';
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>max)
                max=n[i];
        }
        return int(max-'0');
    }
};
