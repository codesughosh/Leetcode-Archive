class Solution {
public:
    bool rotateString(string s, string goal) {
        string z = s+s;
        if(s.size()!=goal.size())
        {
            return false;
        }
        if(z.find(goal) != string::npos)
        {
            return true;
        }
        return false;
    }
};