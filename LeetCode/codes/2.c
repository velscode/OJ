/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode * res = NULL;
    struct ListNode * pres = NULL;

    int a, b, sum, carry = 0;
    while(l1 != NULL || l2 != NULL) {
        l1 == NULL ? (a = 0) : (a = l1->val); 
        l2 == NULL ? (b = 0) : (b = l2->val);

        if (pres != NULL) {
            pres->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            pres = pres->next;
            pres->next = NULL;
        } else {
            pres = (struct ListNode *)malloc(sizeof(struct ListNode));
            res = pres;
            pres->next = NULL;
        }
        
        pres->val = (a + b + carry) % 10;
        carry =  (a + b + carry) / 10;

        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;
    }

    if (carry != 0) {
            pres->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            pres = pres->next;
            pres->next = NULL;
            pres->val = carry;
    }

    return res;
}