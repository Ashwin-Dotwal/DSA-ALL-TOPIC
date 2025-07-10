class Solution
{
public:
  // Helper function to find the middle node of the linked list
  ListNode *getMid(ListNode *head)
  {
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }

  // Helper function to reverse a linked list
  // can do using recursion
  ListNode *reverseList(ListNode *head)
  {
    ListNode *prev = NULL;
    while (head != NULL)
    {
      ListNode *forward = head->next;
      head->next = prev;
      prev = head;
      head = forward;
    }
    return prev;
  }

  // Main function to check if the linked list is a palindrome
  bool isPalindrome(ListNode *head)
  {
    ListNode *mid = getMid(head);      // Step 1: Find middle
    ListNode *temp = reverseList(mid); // Step 2: Reverse second half

    // Step 3: Compare both halves
    ListNode *head1 = head;
    ListNode *head2 = temp;

    while (head2 != NULL)
    {
      if (head1->val != head2->val)
      {
        return false;
      }
      head1 = head1->next;
      head2 = head2->next;
    }
    return true;
  }
};