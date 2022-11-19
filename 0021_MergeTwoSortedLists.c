// Author: Blake Freer
// Date Created: November 19, 2022
// Time: O(n)
// Space: O(1)

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

struct ListNode * minNode(struct ListNode * l1, struct ListNode * l2){
    if(!l1 && !l2) return NULL;
    if(l1){
        if(l2){
            return (l1->val<l2->val)?l1:l2;
        }
        return l1;
    }
    return l2;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* header = malloc(sizeof(struct ListNode));
    header->val = 0;
    header->next = NULL;
    struct ListNode* cur;
    cur = header;
    struct ListNode* min;
    while(min = minNode(list1, list2)){
        cur->next = min;
        cur = cur->next;
        if(cur == list1){
            list1 = list1->next;
        } else {
            list2 = list2->next;
        }
    }
    return header->next;
}