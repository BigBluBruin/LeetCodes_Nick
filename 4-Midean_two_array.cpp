#include "universal_headers.hpp"
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> result;
        vector<int>::iterator ptr1, ptr2;
        ptr1 = nums1.begin();
        ptr2 = nums2.begin();

        if (ptr1 == nums1.end())
        {
            result.push_back(*ptr2);
            ptr2++;
        }
        else if (ptr2 == nums2.end())
        {
            result.push_back(*ptr1);
            ptr1++;
        }
        else
        {
            if (*ptr1 > *ptr2)
            {
                result.push_back(*ptr2);
            }
            else
            {
                result.push_back(*ptr1);
            }
            ptr1++;
            ptr2++;
        }

        while (ptr1 != nums1.end() || ptr2 != nums2.end())
        {
            if (ptr1 == nums1.end())
            {
                result.push_back(*ptr2);
                ptr2++;
            }
            else if (ptr2 == nums2.end())
            {
                result.push_back(*ptr1);
                ptr1++;
            }
            else
            {
                if (*ptr1 > *ptr2)
                {
                    result.push_back(*ptr2);
                }
                else
                {
                    result.push_back(*ptr1);
                }
                ptr1++;
                ptr2++;
            }
        }

        for (auto aa : result)
        {
            cout << aa << " ";
        }
        cout << endl;

        int total_size = (int)nums1.size() + (int)nums2.size();
        if (total_size % 2 == 1)
        {
            return (double)result[(total_size - 1) / 2];
        }
        else
        {
            return ((double)result[total_size / 2] + (double)result[total_size / 2 - 1]) / 2.0;
        }
    }
};