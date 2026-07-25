class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unique;
        unordered_set<int> seen;

        for(int num : nums)
        {
            if(seen.count(num) == 0)
            {
                unique.push_back(num);
                seen.insert(num);
            }
        }
        int k = unique.size();
        for(int i = 0; i < k; i++)
        {
            nums[i] = unique[i];
        }

        return k;
    }
};