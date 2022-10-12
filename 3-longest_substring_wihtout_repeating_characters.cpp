#include "universal_headers.hpp"

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<int, int> m; // define a table for searching

        int max_length = 0; // define and initialize the length
        int cur_len = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]] == 0)
            {
                cur_len++;
                m[s[i]] = i + 1;
            }
            else
            {
                cur_len = min(cur_len + 1, i - m[s[i]] + 1);
                m[s[i]] = i + 1;
            }
            max_length = max(max_length, cur_len); // update
        }

        return max_length;
    }
};