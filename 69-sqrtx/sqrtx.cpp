class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        int n=1;
        if(x==0)
        {
            return 0;
        }
        while(i<=x/i)
        {
            i++;
        }
        return i-1;
    }
};