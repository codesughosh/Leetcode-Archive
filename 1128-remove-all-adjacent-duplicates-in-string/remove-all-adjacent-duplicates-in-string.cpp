class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> x;

        for(char c:s)
        {
            if(!x.empty() && x.top() == c)
            {
                x.pop();
            }
            else
            {
                x.push(c);
            }
        }
        stack<char> y;
        while(!x.empty())
        {
            y.push(x.top());
            x.pop();
        }
        string z;
        while(!y.empty())
        {
            z.push_back(y.top());
            y.pop();
        }

        return z;
    }
};