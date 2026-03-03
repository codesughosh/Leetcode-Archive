class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> x;
        for(int num : nums)
        {
            x[num]++;
        }
        int index = 0;
        for(int i=0; i < x[0]; i++)
        {
            nums[index++] = 0;
        }
        for(int i=0; i < x[1]; i++)
        {
            nums[index++] = 1;
        }
        for(int i=0; i < x[2]; i++)
        {
            nums[index++] = 2;
        }
    }
};