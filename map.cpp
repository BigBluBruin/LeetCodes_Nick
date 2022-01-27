# include "universal_headers.hpp"


using namespace std;

vector<std::vector<int>> two_sum(vector<int> input, int target);

int main()
{ 
    std::map<int,int> aa;
    aa.insert(std::pair<int,int>(1,1));
    aa[2]=5;
    std::cout<<aa[0]-1<<" "<<std::endl;
    std::cout<<aa[1]-1<<" "<<std::endl;
    std::cout<<aa[2]-1<<" "<<std::endl;
    return 0;
}