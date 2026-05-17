#include <bits/stdc++.h>
using namespace std;
ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* leftpre = dummy;
        ListNode* curr = head;

        for(int i=0;i<left-1;i++)
        {
            leftpre = leftpre->next;
            curr = curr->next;
        }

        ListNode* subListNode = curr;
        ListNode* preNode = NULL;

        for(int i=0;i<=right -left;i++)
        {
            ListNode* nextNode = curr->next;
            curr->next = preNode;
            preNode = curr;
            curr = nextNode;
        }

        leftpre->next = preNode;
        subListNode->next = curr;

        return dummy->next;
    }