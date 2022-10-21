# include "universal_headers.hpp"

class Solution {
public:

    string to_string_nick(int input)
    {
        std::unordered_map<int, char> mapping={
            {0,'0'}, {1,'1'}, {2,'2'}, {3,'3'}, {4,'4'},
            {5,'5'}, {6,'6'}, {7,'7'}, {8,'8'}, {9,'9'}
        };

        int rem, total_num=floor(log10(input))+1;
        std::string output(total_num,'0');
        for(int ii=0; ii<total_num; ii++)
        {
            rem=input%10;
            input/=10;
            output[total_num-1-ii]=mapping[rem];
        }

        return output;
    }



    int to_int_nick(std::string input)
    {
        int output=0;
        for(int ii=0; ii<input.length();ii++)
        {
            output+=10*(input[ii]-'0');
        }
        return output;

    }

    string multiply(string num1, string num2) {

        return to_string_nick(to_int_nick(num1)*to_int_nick(num2));
        
    }
};