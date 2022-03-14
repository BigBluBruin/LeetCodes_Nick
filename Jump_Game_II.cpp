#include "universal_headers.hpp"


class Solution {
public:
    int jump(vector<int>& nums) {

        vector<int> J(nums.size(),30000);
        J[nums.size()-1]=0;

        for(int ii=nums.size()-2; ii>=0; ii--)
        {
            int cur_step = nums[ii];


            if(nums[ii]>0)
            {
                for(int jj=ii+1; jj<min(ii+cur_step+1,(int)nums.size()); jj++)
                {
                    if(J[jj]+1<J[ii])
                        J[ii]=J[jj]+1;
                }
            }
        }

        return J[0];       
    }
};


int main()
{
    Solution this_s;
    vector<int> input = {2,3,0,1,4};
    int output = this_s.jump(input);
    std::cout << output << std::endl;

    return 0;
}