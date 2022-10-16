#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector> 

using namespace std;

int main()
{
        string s="PAYPALISHIRING";
        int numRows =3; 
        
        int quo,rem;
        
        if(numRows>s.length())
        {
            std::cout<<s<<std::endl;
            return 0;
        }
        
        std::vector<std::vector<char>> result;
        result.resize(numRows);
        //std::cout<<result.size()<<std::endl;
        for(int ii = 0 ; ii<s.length(); ii++)
        {
            rem = ii%(2*numRows-2);
            
            if(rem<numRows-1)
            {
                //std::cout<<s[ii]<<std::endl;
                result[rem].push_back(s[ii]);
            }
            else
            {
               result[2*numRows-2-rem].push_back(s[ii]); 
            }
        }
        
        string s2;
        
        for(auto aa : result )
        {{
            for(auto bb: aa)
            {
                //std::cout<<bb<<std::endl;
                s2+=bb;
            }
        }}
        
        std::cout<<s2<<std::endl;
        return 0;
}