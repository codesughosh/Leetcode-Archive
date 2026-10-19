class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd = 0;
        int maxInd2 = 0;
        int n = nums.size();
        if(n==1 && nums[0]==0)
        {
            return true;
        }
        for(int i=0; i<n; i++)
        {
            if(i > maxInd) 
            {
                return false;
            }
            maxInd = max( i + nums[i], maxInd);
            if(maxInd >= n-1)
            {
                return true;
            }
        }
        return false;
    }
};