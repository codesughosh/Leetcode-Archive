class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char,int> x;
        unordered_map<char,int> y;

        for(char c : s)
        {
            x[c]++;
        }
        for(char c : t)
        {
            y[c]++;
        }
        return x==y;
    }
};