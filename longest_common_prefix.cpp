# include "universal_headers.hpp"

int main()
{
    std::vector<string> aa= {"flower","flow","flight"};
    string output="";
    
    for(int ii=0; ii<aa[0].length(); ii++)
    {
        for(int jj=1; jj<(int)aa.size(); jj++ )
        {
            if(ii+1>aa[jj].length()|| aa[jj][ii] != aa[00][ii])
            {
                std::cout<<output<<"-----"<<std::endl;
                return 0;
            }
        }
        output+=aa[0][ii];
    }

    std::cout<<output<<"-----"<<std::endl;
    return  0;
}
