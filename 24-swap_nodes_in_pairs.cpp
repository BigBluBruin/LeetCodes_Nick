# include "universal_headers.hpp"

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
    ListNode* swapPairs(ListNode* head) {

        ListNode *output=NULL;
        // check the empty nodes
        if (head==nullptr)
            return output;
        if (head->next==nullptr)
            return head;
        // for loop
        output=head->next;
        ListNode *cur_pt=head, *next_pt=NULL, *pre_pt=NULL;
        while(true)
        {
            // update next_pt
            next_pt=cur_pt->next;
            // check end
            if(next_pt==nullptr)
                break;
            // swap in pairs
            if(pre_pt!=NULL)
                pre_pt->next = next_pt;
            cur_pt->next=next_pt->next;
            next_pt->next = cur_pt;
            // update cur_pt
            pre_pt = cur_pt;
            cur_pt = cur_pt->next;
            if(cur_pt==nullptr)
                break;
            
        }
        return output;
        
    }
};