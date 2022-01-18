#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
        string s="abcabcbb";
        
        unordered_map<int,int> m; //define a table for searching
        
        int max_length=0; //define and initialize the length
        int cur_len = 0;
        
        for (int i=0; i<s.length(); i++)
        {
            std::cout<<m[s[i]]<<"||";
            if(m[s[i]]==0)
            {
                cur_len++;
                m[s[i]]=i+1;
            }
            else
            {
                cur_len=min(cur_len+1,i-m[s[i]]+1);

                // std::cout<<i<<" "<<m[s[i]]<<std::endl;
                
                m[s[i]]=i+1;
            }  
             std::cout<<cur_len<<std::endl;
            // std::cout<<"-------"<<std::endl;          
            max_length = max(max_length,cur_len); // update
        }
        
        std::cout<<max_length<<std::endl;

        return max_length;
}