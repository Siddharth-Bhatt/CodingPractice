/*****************************************************************************************
 *                      Problem
 ****************************************************************************************/
/*
*   https://leetcode.com/problems/reverse-linked-list/
*
*   Given the head of a singly linked list, reverse the list, and return the reversed list
*
*/

/*****************************************************************************************
 *                      Solution
 ****************************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *temp, *cur = head, *prev = NULL;        

        while(cur)
        {
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
};