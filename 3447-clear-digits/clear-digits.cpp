class Solution {
public:
    string clearDigits(string s) {
        stack<char> x;
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i])) {
                if(!x.empty())
                x.pop();
            }
            else
            {
                x.push(s[i]);
            }
        }
        int j=0;
        string res = "";
        while(!x.empty())
        {
            res = x.top() + res;
            x.pop();
            j++;
        }

        return res;
    }
};