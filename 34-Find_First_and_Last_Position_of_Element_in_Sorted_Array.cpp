# include "universal_headers.hpp"

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // whole idea: first find left then find right
        int tar_start, tar_end;
        std::vector<int> output={-1,-1};

        //special error check 
        if(nums.size()==0)
        {
            return output;
        }
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                output={0,0};
                return output;
            }
            else
            {
                output={-1,-1};
                return output;
            }
        }   

        // step-1: find left boundary 
        int left=0, right=nums.size()-1, mid;
        while (right > left)
        {
            mid = (left + right) / 2;
            if (nums[mid] > target)
                left = mid;
            else if (nums[mid] < target)
                right = mid;
            else
                right = mid;
            if (right - left == 1)
            {
                if (nums[right] == nums[left])
                    tar_start = left;
                else
                    tar_start = right;
                right--;
            }
        }

        // step 2: find the right bound
        left=0;
        right=nums.size()-1;
        while (right > left)
        {
            mid = (left + right) / 2;
            if (nums[mid] > target)
                left = mid;
            else if (nums[mid] < target)
                right = mid;
            else
                left = mid;
            if (right - left == 1)
            {
                if (nums[right] == nums[left])
                    tar_end = right;
                else
                    tar_end = left;
                left++;
            }
        }


        // check 
        if(nums[tar_start]==target)
        {
            output={tar_start,tar_end};
        }
        else
        {
            output={-1,-1};
        }
        return output;
    }
};