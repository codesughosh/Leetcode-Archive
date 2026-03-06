class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> x;
        vector<int> res;
        for(int y : nums)
        {
            x[y]++;

            if(x[y] > nums.size()/3 && find(res.begin(), res.end(), y) == res.end())
            {
                res.push_back(y);
            }
        }

        return res;
    }
};