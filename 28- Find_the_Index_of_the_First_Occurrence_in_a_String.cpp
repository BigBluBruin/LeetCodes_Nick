#include "universal_headers.hpp"


class Solution {
public:
    int strStr(string haystack, string needle) {
        int length_hs = haystack.length(), length_needle = needle.length();

        for(int ii=0; ii<length_hs-length_needle+1; ii++)
        {
            if(haystack.substr(ii,length_needle)==needle)
            {
                return ii;
            }
        }

        return -1;
        
    }
};