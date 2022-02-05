#include "universal_headers.hpp"

using namespace std;

vector<int> two_sum(vector<int> input, int target, int & global_distance);

int main()
{
    std::vector<int> output, temp;
    int aa, pr, global_distance=30000;
    std::vector<int> nums = {56,57,-47,-14,23,31,20,39,-51,7,-4,43,-53,32,24,56,-28,90,-75,-6,21,-100,41,-84,95,95,44,84,70,-22,-86,-6,90,-87,65,-28,-29,-94,98,-28,-100,23,-25,6,-56,-54,-5,53,-88,-25,-31,-71,-13,-62,73,-35,-78,16,99,97,84,-27,-43,-50,18,-16,-61,7,-17,16,-92,28,43,-38,-33,-27,84,-72,-100,-91,-97,-99,59,-63,73,99,98,-100,-37,-80,3,18,93,-81,12,-75,-43,99,10,10,-6,13,0,76,-82,-5,27,-38,-81,77,-55,-100,90,-32,-25,-15,-16,68,-6,87,65,-38,82,78,-61,87,-72,46,50,-60,86,39,69,85,-49,28};
    int target = -289;
    int ssize = (int)nums.size();
    sort(nums.begin(), nums.end());
    if (nums.size() < 3)
    {
        cout << "Not enough input values ..." << std::endl;
        return 0;
    }
    for (int ii = 0; ii < ssize - 2; ii++)
    {

        aa = nums[0];
        std::cout << aa << " " << std::endl;
        // std::cout<<aa<<"----"<<std::endl;
        nums.erase(nums.begin());
        if (ii > 0 and aa == pr)
            continue;
        pr = aa;
        temp = two_sum(nums, target - aa, global_distance);
        if(temp.size()>0)
        {
            output.clear();
            output.push_back(aa);
            output.push_back(temp[0]);
            output.push_back(temp[1]);
        }
    }

    for (auto ii2 : output)
    {
        std::cout << ii2 << " ";
    }
    std::cout << std::endl;

    return 0;
}

vector<int> two_sum(vector<int> input, int target, int & global_distance)
{
    std::vector<int> result;
    int pre;
    int left_pointer = 0, right_pointer = (int)input.size() - 1;
    do
    {
        pre = abs(input[left_pointer] + input[right_pointer] - target);
        if (pre < global_distance)
        {
            result.clear();
            result.push_back(input[left_pointer]);
            result.push_back(input[right_pointer]);
            global_distance = pre;
        }
        if((input[left_pointer]+input[right_pointer])>target)
        {
            right_pointer--;
        }
        else
        {
            left_pointer++;
        }
        // if(pre<abs(input[left_pointer]+input[right_pointer]-target))
        // {
        //     return result;
        // }
    } while (left_pointer < right_pointer);
    return result;
}