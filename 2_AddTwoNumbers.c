// Author: Blake Freer
// Date: November 2, 2022
// Runtime: 13ms - Faster than 92.90% of C submissions (highly variable between submissions)
// Memory Usage: 7.1 MB Less than 95.56% of C submissions (stable between submissions)


// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 
int add(int val1, int val2, int * carry){
    val1 = val1 + val2 + *carry;
    *carry = val1 > 9;
    val1 = val1 - 10 * (*carry);
    return val1;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    struct ListNode * cur1 = l1;
    while(1){
        cur1->val = add(cur1->val, l2->val, &carry);
        if(!l2->next || !cur1->next){
            break;
        }
        cur1 = cur1->next;
        l2 = l2->next;
    }
    if(l2->next){
        cur1->next=l2->next;
    }
    while(carry && cur1->next){
        cur1=cur1->next;
        cur1->val = add(cur1->val, 0, &carry);
    }
    if(carry){
        cur1->next = malloc(sizeof(struct ListNode));
        cur1->next->val = carry;
        cur1->next->next = 0;
    }
    
    return l1;
}