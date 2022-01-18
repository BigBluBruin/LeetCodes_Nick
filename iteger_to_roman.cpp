# include <iostream>
# include <string.h>
# include <cmath>
# include <vector>

using namespace std;

int main()
{
    int num=1994;
    int num_dig = floor(log10(num)+1),temp;
    string output="";
    std::vector<vector<string>> set={{"I","V"},{"X","L"},{"C","D"},{"M"}};
    
    for(int ii=0 ; ii<num_dig; ii++)
    {
        temp=num%10;
        std::cout<<temp<<"--"<<std::endl;
        num/=10;
        if(temp-5==4)
        {
            output = set[ii][0]+set[ii+1][0]+output;
        }
        else if(temp-5>=0 && temp-5<4)
        {
            output = set[ii][1]+std::string(temp-5,set[ii][0][0])+output;
        }
        else if(temp-5 == -1)
        {
            output = set[ii][0]+set[ii][1]+output;
        }
        else
        {
            output = std::string(temp,set[ii][0][0])+output;
        }
         std::cout<<output<<std::endl;
    }

    std::cout<<output<<std::endl;


    return  0;
}
