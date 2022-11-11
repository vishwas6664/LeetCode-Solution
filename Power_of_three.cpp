class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)
            return false;
        else
        {
            for(int i=0;;i++)
            {
                if(pow(3,i)>n)
                    return false;
                if(pow(3,i)==n)
                    return true;
            }
        }
        return false;

    }
};
