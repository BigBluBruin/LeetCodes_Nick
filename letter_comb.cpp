# include "universal_headers.hpp"


void update_strings(std::vector<string> &input, std::vector<string>& dials, int dig);

int main()
{
    string digits="92";
    int cur_dig;
    std::vector<string> dials={"abc","edf","ghi","jkl","mno","pqrs","tuv","wxyz"};
    std::vector<string> output;
    output.clear();
    for(int ii = 0; ii<(int)digits.size(); ii++)
    {
        cur_dig = digits[ii]-'0'-2;
        update_strings(output,  dials, cur_dig);
    }

    for(auto aa: output)
    {
        std::cout<<aa<<std::endl;
    }
    return 0;
}

void update_strings(std::vector<string> &input, std::vector<string>& dials, int dig)
{
    int cur_size = (int)input.size();
    if( cur_size ==0)
    {
        for(int ii=0 ; ii<(int)dials[dig].length(); ii++)
        {
            input.push_back(string(1,dials[dig][ii]));
        }
            
    }
    else
    {
        for (int ii = 0; ii < cur_size; ii++)
        {
            for (int ii = 0; ii < (int)dials[dig].length(); ii++)
                input.push_back(input[0]+string(1,dials[dig][ii]));
            input.erase(input.begin());
        }
    }
}

