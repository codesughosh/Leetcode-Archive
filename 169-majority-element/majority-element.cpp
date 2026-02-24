class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> x;

        for(int y : nums)
        {
            x[y]++;

            if(x[y] > nums.size()/2)
            {
                return y;
            }
        }
        return -1;
    }
};