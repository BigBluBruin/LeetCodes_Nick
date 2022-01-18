#include <unordered_map>
#include <iostream>
#include <string>


int main()
{
    std::unordered_map<char, int> m;

    std::string s = "122";


    // If you acccess some key=KEY , the pair including the (KEY,0) will be added.
    // Do the experiment by (un)comment the next two lines
    // std::cout<<m[s[0]]<<std::endl;
    // std::cout<<m[s[1]]<<std::endl;

    for(auto iter=m.begin(); iter!=m.end(); ++iter)
    {
        std::cout<<iter->first<<" "<<iter->second<<std::endl;
    }

    return 1;
}