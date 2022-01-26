# include "universal_headers.hpp"


using namespace std;

vector<std::vector<int>> two_sum(vector<int> input, int target);

int main()
{ 
    std::vector<std::vector<int>> output,temp;
    int aa;
    std::vector<int> nums={-2,0,1,1,2};
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
        // std::cout<<aa<<"----"<<std::endl;
         nums.erase(nums.begin());
        // for (auto aa : nums)
        // {
        //     std::cout << aa << " ";
        // }
        // std::cout << "|" << endl;
        temp = two_sum(nums,-aa);

        if (temp.size()>0 )
        {
            if ( output.size()>0 and temp[0][0] == output[output.size() - 1][0] and temp[0][2] == output[output.size() - 1][2] )
            {
                temp.erase(temp.begin());
            }
        }
        output.insert(output.end(),temp.begin(),temp.end());
    }

    for(auto ii1 : output)
    {
        for(auto ii2: ii1)
        {
            std::cout<<ii2<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}


vector<std::vector<int>> two_sum(vector<int> input, int target)
{
    std::vector<std::vector<int>> result;
    int left_pointer=0, right_pointer=(int)input.size()-1;
    do{
       
       std::cout<<left_pointer<<" "<<right_pointer<<std::endl;
        if(input[left_pointer]+input[right_pointer]>target)
        {
            right_pointer--;
        }
        else if (input[left_pointer]+input[right_pointer]<target)
        {
            left_pointer++;
        }
        else
        {
            if(result.size()==0)
            {
                result.push_back({-target,input[left_pointer],input[right_pointer]});
                
            }
            else if(result[result.size()-1][2]!=input[right_pointer])
            {
                result.push_back({-target,input[left_pointer],input[right_pointer]});
               
            }
            left_pointer++;
            
        }
    }while(left_pointer<right_pointer);

 
    // for (auto ii1 : result)
    // {
    //     for (auto ii2 : ii1)
    //     {
    //         std::cout << ii2 << " ";
    //     }
    //     std::cout << std::endl;
    // }

    return result;
}