#include <iostream>
using namespace std;

// Definition of doubly linked list
struct ListNode
{
  int val;
  ListNode *next;
  ListNode *prev;

  ListNode() : val(0), next(NULL), prev(NULL) {}

  ListNode(int data1) : val(data1), next(NULL), prev(NULL) {}

  ListNode(int data1, ListNode *next1, ListNode *prev1)
      : val(data1), next(next1), prev(prev1) {}
};

class Solution
{
public:
  // Helper to get the length of the list
  int getLength(ListNode *head)
  {
    int len = 0;
    while (head != NULL)
    {
      len++;
      head = head->next;
    }
    return len;
  }

  // Function to delete a node at a specific position (1-indexed)
  void deleteAtPosition(ListNode *&head, ListNode *&tail, int position)
  {
    if (head == NULL)
    {
      cout << "Linked list is empty" << endl;
      return;
    }

    int len = getLength(head);
    if (position < 1 || position > len)
    {
      cout << "Please enter a valid position" << endl;
      return;
    }

    // Deleting the only node
    if (len == 1)
    {
      delete head;
      head = NULL;
      tail = NULL;
      return;
    }

    // Deleting the first node
    if (position == 1)
    {
      ListNode *temp = head;
      head = head->next;
      head->prev = NULL;
      delete temp;
      return;
    }

    // Deleting the last node
    if (position == len)
    {
      ListNode *temp = tail;
      tail = tail->prev;
      tail->next = NULL;
      delete temp;
      return;
    }

    // Deleting a node from the middle
    ListNode *curr = head;
    for (int i = 1; i < position; ++i)
    {
      curr = curr->next;
    }

    ListNode *prevNode = curr->prev;
    ListNode *nextNode = curr->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete curr;
  }
};

// Utility to print the list
void printList(ListNode *head)
{
  while (head != NULL)
  {
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}

// Sample usage
int main()
{
  // Creating a doubly linked list: 10 <-> 20 <-> 30 <-> 40
  ListNode *node1 = new ListNode(10);
  ListNode *node2 = new ListNode(20);
  ListNode *node3 = new ListNode(30);
  ListNode *node4 = new ListNode(40);

  node1->next = node2;
  node2->prev = node1;
  node2->next = node3;
  node3->prev = node2;
  node3->next = node4;
  node4->prev = node3;

  ListNode *head = node1;
  ListNode *tail = node4;

  cout << "Original list: ";
  printList(head);

  Solution sol;
  sol.deleteAtPosition(head, tail, 3); // Delete node at position 3 (value 30)

  cout << "After deletion at position 3: ";
  printList(head);

  // Clean up memory
  while (head != NULL)
  {
    ListNode *temp = head;
    head = head->next;
    delete temp;
  }

  return 0;
}

// leetcode easy solution

class Solution
{
public:
  void deleteNode(ListNode *node)
  {
    if (node == nullptr || node->next == nullptr)
      return;

    node->val = node->next->val;
    ListNode *temp = node->next;
    node->next = node->next->next;
    delete temp;
  }
};