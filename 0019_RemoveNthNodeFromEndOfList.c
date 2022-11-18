// Author: Blake Freer
// Date Created: November 18, 2022
// Time: O(n)
// Space: O(n)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* header = malloc(sizeof(struct ListNode));
    header->val = 0;
    header->next = head;

    struct ListNode** arr = malloc(sizeof(struct ListNode *) * n);
    arr[0] = header;
    int i = 1;
    while(head->next){
        arr[i%n] = head;
        i++;
        head=head->next;
    }
    head = arr[i%n];

    struct ListNode * temp = head->next;
    head->next = temp->next;
    free(temp);
    return header->next;
}