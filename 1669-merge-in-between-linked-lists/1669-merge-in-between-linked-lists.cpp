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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int n = 0;
        ListNode* p = list1;
        ListNode* q = list2;
        
        while(p)
        {
            p = p->next;
            n++;
        }
        
        ListNode* start = new ListNode();
        ListNode* end = new ListNode();
        
        p = list1;
        while(a>1)
        {
            p = p->next;
            a--;
        }
        start = p;
        p = list1;
        while(b>-1)
        {
            b--;
            p = p->next;
        }
        
        end = p;
        start->next = list2;
        ListNode* last = new ListNode();
        p = list2;
        while(p->next)
        {
            p = p->next;
        }
        p->next = end;
        return list1;
    }
};