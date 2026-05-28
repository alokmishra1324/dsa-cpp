#include <bits/stdc++.h>
using namespace std;

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* resNode = new ListNode();
        ListNode* head = resNode;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                resNode->next = list1;
                list1 = list1->next;
            } else {
                resNode->next = list2;
                list2 = list2->next;
            }
            resNode = resNode->next;
        }
        if (list1 == NULL) {
            resNode->next = list2;
        }
        if (list2 == NULL) {
            resNode->next = list1;
        }
        return head->next;
    }