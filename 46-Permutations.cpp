# include "universal_headers.hpp"

class Solution {
public:

    void permute_dyf(vector<std::vector<int>> & stored_fun, std::vector<int> & cur_seq, int total_size, std::vector<int> all_vals)
    {
        // check terminiation options
        //check 1: if thre exists the repetive value, then reutrn
        for (int ii=0; ii<(int)cur_seq.size()-1;ii++)
        {
            if(cur_seq[ii]==cur_seq[cur_seq.size()-1])
                return; 
        }
        // check 2: the length if satisfied, then termanite
        if(total_size==(int)cur_seq.size())
        {
            stored_fun.push_back(cur_seq);
            return;
        }

        // do iterate

        for (auto aa : all_vals)
        {
            cur_seq.push_back(aa);
            permute_dyf(stored_fun, cur_seq, total_size, all_vals);
            cur_seq.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        std::vector<std::vector<int>> out;
        std::vector<int> cur_seq;
        //std::cout<<"here-1"<<std::endl;
        permute_dyf(out, cur_seq, (int)nums.size(), nums);
        return out;
        
    }
};


int main()
{
    Solution s;
    std::vector<int> intput={1,2,3};
    std::vector<std::vector<int>> aa = s.permute(intput);

    for(auto cc_1: aa)
    {
        for(auto bb_1: cc_1)
        {
            std::cout<<bb_1<<" ";
        }
        std::cout<<std::endl;
    }
}