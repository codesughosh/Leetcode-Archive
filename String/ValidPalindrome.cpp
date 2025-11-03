#include <string>
#include <algorithm>
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string f;
        for(int j=0; j<n; j++)
        {
            if (isalnum(s[j]))
            {
                f.push_back(s[j]);
            }
        }
        int i = 0;
        int m = f.size();
        while (i < m/2)
        {
            if (f[i]!=f[m-i-1])
            {
                return false;
            }
            i=i+1;
        }
        return true;
    }
};
