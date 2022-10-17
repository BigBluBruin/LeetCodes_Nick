#include "universal_headers.hpp"

class Solution {
public:
    int search(vector<int>& nums, int target) {

        //spetical check
        if(nums.size()==0)
            return -1;
        if(nums.size()==1)
            return nums[0]==target? 0 : -1;
        if (nums.size()==1)
        {
            if(nums[0]==target)
                return 0;
            else if(nums[1]==target)
                return 1;
            else 
                return -1;
        }
        
        //do the while loop
        int left=0, right=(int)nums.size()-1, mid;
        while(left-right>1)
        {
            // boundary check 
            if(nums[left]==target)
                return left;
            else if(nums[right]==target)
                return right;

            // special check
            if(target > nums[right] and target < nums[left] )
                return -1;
            
            //calculate mid
            mid = (left+right)/2;
            if(nums[mid]==target)
                return mid;

            //compare nums[mid] to mid[right]
            if(nums[mid]>nums[right])
            {
                // nums[mid] is in the left lobe
                if(target>nums[left] and target<nums[mid])
                {
                    right = mid;
                }
                else
                {
                    left = mid;
                }
            }
            else if (nums[mid]<nums[right])
            {
                if(target>nums[mid] and target<nums[right])
                {
                    left=mid;
                }
                else
                {
                    right=mid;
                }
            }
            else
            {
                return mid;
            }
        }
        return -1;

        
    }
};