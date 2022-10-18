# include"universal_headers.hpp"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* output=NULL, *cur_pt=NULL;
        int total_size = lists.size();
        int min_pos,min_val=50000000;
        bool flag=false;
        while(true)
        {
            // break rule
            flag=false;
            for(auto & aa: lists)
            {
                if(aa!=NULL)
                {
                    flag=true;
                }
                break;
            }

            //iterate
            if(flag)
            {
                for(int ii=0; ii<total_size;ii++)
                {
                    if(lists[ii]!=NULL and lists[ii]->val<=min_val)
                    {
                        min_pos = ii; 
                        min_val = lists[ii]->val;
                    }
                }

                if(output== NULL)
                    {
                        output = lists[min_pos];
                        cur_pt = lists[min_pos];
                    }
                    else
                    {
                        cur_pt->next = lists[min_pos];
                        cur_pt = cur_pt->next;
                    }
                    min_val = 50000000;
            }
            else
            {
                return output; 
            }           
        }

        return output;       
    }
};