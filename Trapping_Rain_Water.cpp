#include "universal_headers.hpp"


class Solution {
public:
    int trap(vector<int>& height) {
        std::vector<int> left(height.size(),0), right(height.size(),0);
        left[0]=height[0];
        for(unsigned ii=1;ii<height.size(); ii++)
        {
            left[ii]=height[ii]>left[ii-1]? height[ii]:left[ii-1];
        }
        right[height.size()-1]=height[height.size()-1];
        
        for(int ii= (int)height.size()-2; ii>=0; ii--)
        {
            right[ii]=height[ii]>right[ii+1]? height[ii]:right[ii+1];
        }
        int result=0;
        for(unsigned ii=0; ii<height.size();ii++)
        {
            result+=min(left[ii],right[ii])-height[ii];
        }
        return result;

    }
};

int main()
{
    Solution this_s;
    vector<int> a = {4,2,0,3,2,5};
    int output = this_s.trap(a);
    std::cout << output << std::endl;

    return 0;
}