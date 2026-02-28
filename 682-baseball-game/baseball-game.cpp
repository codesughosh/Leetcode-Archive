class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> x;

        for(string i : operations)
        {
            if( i == "C")
            {
                x.pop();
            }
            else if ( i == "D")
            {
                int top = x.top();
                x.push(2*top);
            }
            else if ( i == "+")
            {
                int top1 = x.top();
                x.pop();
                int top2 = x.top();
                x.push(top1);
                x.push(top1 + top2);
            }
            else
            {
                x.push(stoi(i));
            }
        }
        int sum = 0;

        while(!x.empty())
        {
            sum += x.top();
            x.pop();
        }
        return sum;
    }
};