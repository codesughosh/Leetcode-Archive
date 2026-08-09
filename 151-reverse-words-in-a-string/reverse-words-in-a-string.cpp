class Solution {
public:
    string reverseWords(string s) {
        vector<vector<int>> index;
        int start=-1;
        int end=0;
        for(int i=0; i<(int)s.size(); i++)
        {
            if(s[i]!=' ' && start==-1)
            {
                start=i;
            }

            if (s[i] == ' ' && start != -1) {
                index.push_back({start, i - 1});
                start = -1;
            }
        }

        if(start!=-1)
        {
            index.push_back({start,(int)s.size()-1});
        }

        string ans;

        for (int i = index.size() - 1; i >= 0; i--)
        {
            if (!ans.empty())
            {
                ans += ' ';
            }  
            for (int j = index[i][0]; j <= index[i][1]; j++) {
                ans += s[j];
            }
        }

        return ans;
    }
};