# include "universal_headers.hpp"


using namespace std;

void two_sum(vector<int> input, int target, int tru_t ,  int & global_distance,int & true_dis);

int main()
{ 
    int global_distance = 30000;
    int aa, pr, true_dist;;
    std::vector<int> nums={-1,2,1,-4};
    int target = 1;
    int ssize = (int)nums.size();
    sort(nums.begin(),nums.end());
    if(nums.size()<3)
    {
        cout<<"Not enough input values ..."<<std::endl;
        return 0;
    }
    for(int ii=0; ii<ssize-2; ii++)
    {

        aa = nums[0];
        nums.erase(nums.begin());
        if(ii>0 and aa==pr) continue;
        pr = aa;
        two_sum(nums,target-aa,target,global_distance,true_dist);
            
    }

    std::cout<<abs(true_dist+2*target)<<std::endl;

    return 0;
}


void two_sum(vector<int> input, int target, int tru_t , int & global_distance, int & true_dis)
{
 
    int pre;

    int left_pointer=0, right_pointer=(int)input.size()-1;
    do
    {
        pre = abs(input[left_pointer] + input[right_pointer] - target);
        if (pre < global_distance)
        {
            true_dis = input[left_pointer] + input[right_pointer] - target;
            global_distance = pre;
        }
        if(abs(input[left_pointer]+input[right_pointer])>target)
        {
            right_pointer--;
        }
        else
        {
            left_pointer++;
        }
        if(pre<abs(input[left_pointer]+input[right_pointer]-target))
        {
            return ;
        }
    } while (left_pointer < right_pointer);

}