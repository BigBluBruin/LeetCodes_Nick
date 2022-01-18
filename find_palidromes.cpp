#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;
string expand(string &s, int pos_begin, int pos_end);


int main()
{
        string s="babad";

        if(s.length()==1)
        {
            std::cout<<s;
        }
        if(s.length()==2&& s[0]==s[1])
        {
            std::cout<<s;
        }

        string ans=s.substr(0,0);

        for(int ii=0; ii<s.length(); ii++ )
        {
            std::string a1 =expand(s,ii,ii+1);
            std::string a2 =expand(s,ii,ii+2);

            if(a1.length()>ans.length() && a1.length()>a2.length())
            {
                ans = a1;
            }

            if(a2.length()>ans.length() && a2.length()>a1.length())
            {

                ans = a2;
            }
        }

        std::cout<<ans;     
        return 0;
}


string expand(string &s, int pos_begin, int pos_end)
{

    string ans;
    if(pos_end>s.length())
    {
        ans = s[pos_begin];
        return ans;
    }
    if(s[pos_begin] != s[pos_end])
    {
        ans = s[pos_begin];
        return ans;
    }
    int ava_num = min(pos_begin,(int)s.length()-1-pos_end);

    int extra_num = 0;

    for(int ii=1; ii<=ava_num; ii++)
    {
        if(s[pos_begin-ii]==s[pos_end+ii])
        {
            extra_num++;
        }
        else
        {
            break;
        }
    }


    return s.substr(pos_begin-extra_num,pos_end-pos_begin+1+2*extra_num);
}