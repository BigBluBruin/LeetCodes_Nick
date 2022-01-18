#include "universal_headers.hpp"

int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int left_pointer = 0, right_pointer = (int)height.size()-1;
    int max_area=0, temp_area;
    for( int ii = 0; ii<= (int)height.size()-1; ii++ ){
        temp_area = min(height[left_pointer],height[right_pointer])*(right_pointer-left_pointer);
        if(temp_area>max_area){
            max_area=temp_area;
        }
        if(height[left_pointer]>=height[right_pointer]){
            right_pointer--;
        }
        else{
            left_pointer++;
        }

    }
    std::cout<<max_area<<std::endl;

    return 0;
}