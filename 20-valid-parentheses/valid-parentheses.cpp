class Solution {
public:
    bool isValid(string s) {
        stack<char> x;

        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                x.push(c);
            }
            else
            {
                if(x.empty())
                {
                    return false;
                }
                char top = x.top();

                if( (c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[') )
                {
                    return false;
                }

                x.pop();
            }
        }
        return x.empty();
    }
};