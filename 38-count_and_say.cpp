#include "universal_headers.hpp"

class Solution {
public:
    string countAndSay(int n) {
        
        std::string output; 

        if(n==1)
        {
            // base case
            output="1";
            return output;
        }
        else if(n==2)
        {
            // base case
            output="11";
            return output;
        }
        else
        {
            std::string previous_output=countAndSay(n-1);
            // if (n==4)
            //     std::cout<<previous_output<<std::endl;
            // start to read
            int count=1;
            for(int ind=0; ind<(int)previous_output.length(); ++ind)
            {
                if(ind==0)
                {

                }
                else if(ind <(int)previous_output.length()-1)
                {
                    if(previous_output[ind]-'0'==previous_output[ind-1]-'0')
                    {
                        count++;
                        //continue;
                    }
                    else
                    {
                        output=output+std::to_string(count)+previous_output[ind-1];
                        count=1;
                    }
                }
                else
                {
                    //final case
                    if(previous_output[ind]-'0'==previous_output[ind-1]-'0')
                    {
                        count++;
                        output=output+std::to_string(count)+previous_output[ind-1];
                    }
                    else
                    {
                        //std::cout<<"here"<<std::endl;
                        output=output+std::to_string(count)+previous_output[ind-1]+std::to_string(1)+previous_output[ind];
                    }
                }
                // if (n==4)
                //     std::cout<<"k: "<<ind<<" "<<output<<std::endl;
            }
            return output;
        }
    }
};

int main()
{
    Solution s;
    for(int ii=1 ; ii<6; ii++)
    {
        std::string output=s.countAndSay(ii);
        std::cout<<output<<std::endl;
    }
    
    //
    return 0;
}