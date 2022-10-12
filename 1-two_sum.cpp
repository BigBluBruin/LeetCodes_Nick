#include "universal_headers.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        
        for( int ii=nums.size()-1; ii>=0; ii--)
        {
            nums.pop_back();
            
            int val_1 = nums[ii];
            int dif = target - val_1;
            
            vector<int>::iterator it = find(nums.begin(),nums.end(),dif); 
            
            if (it != nums.end())
            {
                int end_pos = it-nums.begin();
                result = {ii, end_pos};
                return result;
            }
        }        
        result = {0,0};
        return result;        
    }
};