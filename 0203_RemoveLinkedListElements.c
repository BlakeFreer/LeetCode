// Author: Blake Freer
// Date Created: November 16, 2022
// Time: O(n)
// Space: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void removeElt(struct ListNode* prev){
    struct ListNode * old = prev->next;
    prev->next = old->next;
    free(old);
}
struct ListNode* removeElements(struct ListNode* head, int val){
    // Create extra header
    struct ListNode* header = malloc(sizeof(struct ListNode));
    header->next = head;
    header->val = -1;
    head = header;
    while(head){
        while(head->next && head->next->val == val){
            removeElt(head);
        }
        head = head->next;
    }
    head = header->next;
    free(header);
    return head;
}