#include "universal_headers.hpp"


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<string> result;
        if(n==0)
        {
            result.push_back("");
        }
        else
        {
            for(int c = 0; c<n; c++)
            {
                for(auto left: generateParenthesis(c))
                {
                    for(auto right: generateParenthesis(n-1-c))
                    {
                        result.push_back("("+left+")"+right);
                    }

                }
            }
        }
        return result;  
    }
};


int main()
{
    Solution this_s;
    std::vector<string> output=this_s.generateParenthesis(3);
    for(auto aa:output)
    {
        cout<<aa<<endl;
    }
    return 0;
}