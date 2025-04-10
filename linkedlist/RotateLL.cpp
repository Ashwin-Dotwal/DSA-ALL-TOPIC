class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k,) {
        if (!head || !head->next || k == 0) return head;
        
        ListNode* tail = head;
        int length = 1;
        
        while (tail->next) {
            tail = tail->next;
            length++;
        }
        
        k %= length;
        if (k == 0) return head;
        
        tail->next = head;
          int stepsToNewHead = length - k;
        ListNode* newTail = tail;
        
        while (stepsToNewHead --) {
            newTail = newTail->next;
        }
        
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        
        return newHead;
    }
};





class Solution {
    public:
      Node* rotate(Node* head, int k) {
          // Edge cases: empty list or no rotation needed
          if (!head || !head->next || k == 0)
              return head;
          
          // Find the length of the list
          Node* tail = head;
          int length = 1;
          
          while (tail->next) {
              tail = tail->next;
              length++;
          }
  
          // Reduce k to within bounds
          k %= length;
          if (k == 0)
              return head;
  
          // Make the list circular
          tail->next = head;
          
          // Find the new tail
          int stepsToNewHead = length - k;
          Node* newTail = head;
          
          for (int i = 1; i < stepsToNewHead; i++) {
              newTail = newTail->next;
          }
  
          // New head is next to new tail
          Node* newHead = newTail->next;
          newTail->next = nullptr;
  
          return newHead;
      }
  };
  