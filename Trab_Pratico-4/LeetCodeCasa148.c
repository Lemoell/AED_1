/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*
===========================
JUNTA DUAS LISTAS ORDENADAS
===========================
*/

struct ListNode* merge(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode headSup;
    struct ListNode* rabo = &headSup;
    headSup.next = NULL;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            rabo->next = list1;
            list1 = list1->next;
        } else {
            rabo->next = list2;
            list2 = list2->next;
        }
        rabo = rabo->next;
    }

    if (list1) rabo->next = list1;
    if (list2) rabo->next = list2;

    return headSup.next;
}

/*
=============================
DIVIDE A LISTA RECURSIVAMENTE
=============================
*/

struct ListNode* sortList(struct ListNode* head) {
    if (!head || !head->next) return head;

    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* prev = NULL;

    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = NULL;
    struct ListNode* left = sortList(head);
    struct ListNode* right = sortList(slow);

    return merge(left, right);
}