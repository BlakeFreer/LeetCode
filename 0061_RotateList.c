// Author: Blake Freer
// Date Created: November 5, 2022

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(!head || k == 0) return head;

    struct ListNode * cur = head;
    int len = 1;
    while(cur->next) {
        cur = cur->next;
        len++;
    }
    struct ListNode * last = cur;
    k = k % len;
    if(!k) return head;
    
    last->next = head;
    cur = head;
    while(len-k > 1){
        cur = cur->next;
        k++;
    }
    last = cur->next;
    cur->next = NULL;
    return last;

}