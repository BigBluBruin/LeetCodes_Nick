# include <iostream>
# include <string.h>
# include <cmath>
# include <vector>

using namespace std;

int main()
{
    int num=549;
    int num_dig = floor(log10(num)+1),temp;
    string output="";
    std::vector<vector<string>> set={{"I","V"},{"X","L"},{"C","D"},{"M"}};

    for(int ii=0 ; ii<num_dig; ii++)
    {
        temp=num%10;
        num/=10;
        if(num-5==4)
        {

        }
        else if( num-5)
        
    }


    return  0;
}
