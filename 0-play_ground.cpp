# include "universal_headers.hpp"

int main()
{
    // std::string st="aaa";
    // std::vector<std::string> a(5);
    // for (int ii=0; ii<5;ii++)
    // {
    //     a[ii]+="a";
    // }
    // for(auto aa: a )
    // {
    //     std::cout<<aa<<std::endl;
    // }
    // std::cout<<st.length()<<std::endl;

    // int aa;
    // std::string str="ab";
    // aa=str[0]-'0';
    // std::cout<<aa<<std::endl;
    // aa=str[1]-'0';
    // std::cout<<aa<<std::endl;
    
    // std::vector<int> v={0,1,2,3,4};
    // std::vector<int> v_1={7,8};

    // std::copy(v.begin(),v.end(),std::back_inserter(v_1));

    // for(auto aa: v_1)
    // {
    //     std::cout<<aa<<" "<<std::endl;
    // }

    std::unordered_map<char, int> aa;
    std::cout<<aa['0']<<std::endl;
    std::cout<<aa['0']++<<std::endl;
    std::cout<<aa['0']<<std::endl;

    return 0;
}