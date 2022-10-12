# include "universal_headers.hpp"



 // Definition for singly-linked list.
 struct ListNode
 {
     // properties
     int val;
     ListNode *next;

     // constructors
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* result = dummy;
        
        int sum = 0, carry = 0;
        while(l1!=NULL or l2!=NULL)
        {
            if(l1!=NULL and l2!=NULL)
            {
                sum=l1->val+l2->val+carry; 
            }
            else if(l1!=NULL)
            {
                sum=l1->val+carry; 
            }
            else
            {
                sum=l2->val+carry; 
            }
            
            carry = sum/10;
            sum %= 10;
            ListNode* node = new ListNode(sum);
            result->next = node;
            result = result->next;
            
            if(l1!=NULL)
            {
                l1=l1->next; 
            }
            if(l2!=NULL)
            {
                l2=l2->next; 
            }            
        }
        
        if(carry)
        {
            ListNode* node = new ListNode(carry);
            result->next = node;
            result = result->next;
        }
        
        return(dummy->next);
        
    }
};