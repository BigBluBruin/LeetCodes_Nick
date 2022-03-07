#include "universal_headers.hpp"

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int len_string = (int)s.length(), length_pattern = (int)p.length();
        vector<vector<bool>> conditional_match(len_string + 1, vector<bool>(length_pattern + 1, false));

        conditional_match[0][0] = true;
        for (int jj = 1; jj <= length_pattern; jj++)
            if (conditional_match[0][jj-1] == true && p[jj-1]=='*')
                conditional_match[0][jj]=true;

        for( int ii=1;ii<=len_string;ii++)
        {
            for(int jj=1;jj<=length_pattern;jj++)
            {
                if(p[jj-1]=='*')
                {
                    conditional_match[ii][jj]=conditional_match[ii-1][jj]||conditional_match[ii][jj-1];
                }
                else if(p[jj-1]=='?'||p[jj-1]==s[ii-1])
                {
                    conditional_match[ii][jj]=conditional_match[ii-1][jj-1];
                }
                else
                {
                     conditional_match[ii][jj]=false;
                }
            }
        }

        for(auto aa:conditional_match)
        {
            for(auto bb: aa)
            {
                std::cout<<bb<<" ";
            }
            std::cout<<std::endl;
        }
        return conditional_match[len_string][length_pattern];
    }
};


int main()
{
    Solution this_s;
    string s = "adceb", p="*a*b";
    bool output = this_s.isMatch(s,p);
    std::cout << output << std::endl;

    return 0;
}