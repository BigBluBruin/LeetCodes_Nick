# include "universal_headers.hpp"

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int total_size = (int)nums.size();
        int pos, tmp;
        int pos_2;
        for (int ii=total_size-1; ii>=0; ii--)
        {
            if(ii==0)
            {
                pos=0;
            }
            else
            {
                if(nums[ii]>nums[ii-1])
                {
                    pos=ii;
                    break;
                }
            }
        }

        if(pos!=0)
        {
            // now we know that nums[pos-1]<nums[pos]
            // we need to find the ninimum larger number for [pos ... total_size-1]
            pos_2 = pos;
            for(int ii = pos; ii<total_size; ii++)
            {
                if(nums[ii]<nums[pos_2] and nums[ii]>nums[pos-1])
                {
                    pos_2 = ii;
                }
            }

            //step 1: swap nums[pos_2] nums[pos-1]
            tmp=nums[pos_2];
            nums[pos_2]=nums[pos-1];
            nums[pos-1]=tmp;

            //step 2: adjust nums[pos_2] to a suitable place
            // check special conditions
            if(pos_2==total_size-1)
            {
                return;
            }
            // if (nums[pos]<=nums[pos+1])
            // {
            //     return;
            // }
            for (int ii = pos_2; ii<total_size-1; ii++)
            {
                if (nums[ii + 1] < nums[ii])
                {
                    tmp = nums[ii];
                    nums[ii] = nums[ii + 1];
                    nums[ii + 1] = tmp;
                }
                else
                {
                    return;
                }
            }
        }
        else
        {
            // swap all the elements
            int swap_num = total_size/2;
            for(int ii=0; ii<swap_num; ii++)
            {
                tmp = nums[ii];
                nums[ii] = nums[total_size-1-ii];
                nums[total_size-1-ii] = tmp;
            } 
            return;
        }
    }
};