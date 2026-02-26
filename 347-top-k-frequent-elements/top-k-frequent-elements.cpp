class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;
        for(int num : nums)
        {
            x[num]++;
        }

        vector<pair<int,int>> y;
        for (const pair<const int,int> p : x)
        {
            y.push_back({p.second, p.first});
        }
        sort(y.rbegin(), y.rend());

        vector<int> z;
        for(int i=0; i<k; i++)
        {
            z.push_back({y[i].second});
        }
        return z;
    }
};