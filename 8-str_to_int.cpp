#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits.h>
#include <string.h>

using namespace std;
string expand(string &s, int pos_begin, int pos_end);

int main()
{
   string s="-1";


   int result=0;
   bool flag=true;

   int pos = 0;
   for (int ii = 0; ii < s.length(); ++ii)
       if (s[ii]==' ')
           pos++;
       else
           break;

    s.erase(s.begin(),s.begin()+pos);
    std::cout<<s<<std::endl;

    if(s[0]=='-'||s[0]=='+')
    {
        if(s[0]=='-')
            flag=false;
        s.erase(s.begin(),s.begin()+1);
    }


    for (int ii = 0; ii < s.length(); ++ii)
        if (s[ii]-'0'>=0 && s[ii]-'0'<=9)
            if (result < INT_MAX / 10)
            {
                result = 10 * result + (s[ii] - '0');
            }
            else if (result == INT_MAX / 10 && s[ii]-'0'<=7 )
            {
                result = 10 * result + (s[ii] - '0');
            }
            else
            {
                if (flag)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
        else
            break;

    result = flag ? result:-result;

    std::cout<<result<<std::endl;

    return result;
}
