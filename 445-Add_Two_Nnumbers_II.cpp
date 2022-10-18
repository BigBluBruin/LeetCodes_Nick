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

    ListNode* reversed_link(ListNode* input)
    {
        ListNode* pre_pt=NULL;
        ListNode* cur_pt=input;
        ListNode* next_pt=NULL;

        while (cur_pt != NULL)
        {
            next_pt = cur_pt->next;
            cur_pt->next = pre_pt;
            pre_pt=cur_pt;
            cur_pt=next_pt;
        }

        return pre_pt;
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};