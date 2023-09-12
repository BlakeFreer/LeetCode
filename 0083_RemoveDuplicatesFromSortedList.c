/**
 * @author Blake Freer
 * @date 2023-09-11
**/

#include<stdlib.h>

// Definition for singly-linked list.
// Comment out if pasting into leetcode
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* startOfChain = head;
    struct ListNode* cur;
    while(startOfChain != NULL){
        cur = startOfChain;
        while(cur->val == startOfChain->val){
            cur = cur->next;
            if(cur == NULL){
                break;
            }
        }
        startOfChain->next = cur;
        startOfChain = cur;
    }
    return head;
}