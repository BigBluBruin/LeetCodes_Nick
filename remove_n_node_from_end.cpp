#include "universal_headers.hpp"

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* first = start;
        ListNode* second = start;

        for (int ii = 0 ; ii<n; ii++)
        {
            first=first->next;
        }

        while(first->next!=NULL)
        {
            first=first->next;
            second=second->next;
        }

        if(second->next == NULL)
        {
            start->next = NULL;
        }
        else
        {
            second->next = second->next->next;
        }

        

        return start; 

    }
};