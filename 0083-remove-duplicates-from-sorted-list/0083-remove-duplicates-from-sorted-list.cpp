class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }

        ListNode* prev = head;

        while (prev->next != NULL) {
            if (prev->val == prev->next->val) {
                ListNode* curr = prev->next;
                prev->next = curr->next;
                delete curr;
            }
            else {
                prev = prev->next;
            }
        }

        return head;
    }
};