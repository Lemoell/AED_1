/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* merge(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode headSup;
    struct ListNode* rabo = &headSup;
    headSup.next = NULL;

    while (list1 != list2) {
        if (list1 -> val < list2 -> val) {
            rabo -> next = list1;
            list1 = list1 -> next;
        } else {
            rabo -> next = list2;
            list2 = list2 -> next;
        }
        rabo = rabo -> next;
    }

    if (list1)rabo -> next = list1;
    if (list2)rabo -> next = list2;
 
    return headSup.next;
}

struct ListNode* sortList(struct ListNode* head) {
    if (!head || !head -> next) return head;

    struct ListNode* mid = head;
    struct ListNode* right = mid -> next;
    mid -> next = NULL;

    struct ListNode* sortLeft = sortList(head);
    struct ListNode* sortRight = sortList(mid);
    
    return merge (sortLeft, sortRight);
}