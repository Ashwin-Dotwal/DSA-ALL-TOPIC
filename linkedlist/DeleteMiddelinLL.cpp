class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr; // To keep track of the node before slow

        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        // Now, `slow` is at the middle, and `prev` is before it
        prev->next = slow->next;
        delete slow;

        return head;
    }
};
  