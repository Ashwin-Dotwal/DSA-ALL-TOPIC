i // input: head = [1,2,3,4]

    // Output: [2,1,4,3]

    class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    if (head == NULL || head->next == 
      NULL)
    {
      return head;
    }

    ListNode *temp = head->next;

    head->next = swapPairs(temp->next);

    temp->next = head;

    return temp;
  }
};