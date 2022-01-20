# include "universal_headers.hpp"

int main()
{
    string s= "MCMXCIV";
    int output = 0;
    map<char, int> table={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    int current_round=3;
    for(int pointer = 0; pointer<s.length(); pointer++)
    {
        output+=table[s[pointer]];
        if(pointer>0 and table[s[pointer]]>table[s[pointer-1]])
        {
            output-= 2*table[s[pointer-1]];
        }
    }

    cout<<output<<"---"<<std::endl;


    return  0;
}
