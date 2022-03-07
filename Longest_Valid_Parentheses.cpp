#include "universal_headers.hpp"

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int len = s.length();
        vector<int> dp(len, 0);

        for (int ii = 1; ii < len; ii++)
        {
            if (len == 0)
                return 0;
            if (s[ii] == ')')
            {
                if (s[ii - 1] == '(')
                    dp[ii] = ii - 2 >= 0 ? 2 + dp[ii - 2] : 2;
                else
                {
                    if (ii - 1 - dp[ii - 1] >= 0 && s[ii - 1 - dp[ii - 1]] == '(')
                    {
                        dp[ii] = dp[ii - 1] + 2;
                        dp[ii] += ii - 2 - dp[ii - 1] >= 0 ? dp[ii - 2 - dp[ii - 1]] : 0;
                    }
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};

int main()
{
    Solution this_s;
    string s = "(())";
    int output = this_s.longestValidParentheses(s);
    std::cout << output << std::endl;

    return 0;
}