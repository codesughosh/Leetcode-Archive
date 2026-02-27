class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> x;

        for(string i : tokens)
        {
            if(i == "/")
            {
                int top1 = x.top();
                x.pop();
                int top2 = x.top();
                x.pop();
                int res = top2/top1;
                x.push(res);
            }
            else if(i == "*")
            {
                int top1 = x.top();
                x.pop();
                int top2 = x.top();
                x.pop();
                int res = top1*top2;
                x.push(res);
            }
            else if(i == "+")
            {
                int top1 = x.top();
                x.pop();
                int top2 = x.top();
                x.pop();
                int res = top1 + top2;
                x.push(res);
            }
            else if(i == "-")
            {
                int top1 = x.top();
                x.pop();
                int top2 = x.top();
                x.pop();
                int res = top2 - top1;
                x.push(res);
            }
            else
            {
                x.push(stoi(i));
            }
        }

        return x.top();
    }
};