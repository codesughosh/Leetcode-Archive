class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> out;
        for(int num : nums)
        {
            if(num > 0)
            {
                pos.push_back(num);
            }
            else
            {
                neg.push_back(num);
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                out.push_back(pos[i/2]);
            }
            else
            {
                out.push_back(neg[i/2]);
            }
        }
        return out;
    }
};