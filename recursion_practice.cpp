#include "universal_headers.hpp"

// This is a recursion practice
// The target is to find the combination of a string array m times 


class Solution
{
public:
    vector<string> string_comb(string &inputs, int times)
    {
        vector<string> output;

        if(times ==  0)
        {
            output.clear();
            for(int ii=0; ii<(int)inputs.length(); ii++)
            {
                output.push_back(string(1,inputs[ii]));
            }
            return output;
        }


        for( int ii = 3; ii>=0; ii--)
        {
            
        }

        return output;

    }


   
};

int main()
{
    Solution cur_sol;

    string aa = "abc";

    vector<string> bb = cur_sol.string_comb(aa, 3-1);

    for (auto cur_string : bb)
    {
        std::cout << cur_string << std::endl;
    }

    return 0;
}