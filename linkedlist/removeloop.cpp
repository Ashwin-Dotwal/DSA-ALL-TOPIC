#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *prev;
  node *next;
  node()
  {
    this->data = 0;
    this->prev = NULL;
    this->next = NULL;
  }
  node(int data)
  {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};
void print(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int getlength(node *&head)
{
  int len = 0;
  node *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    len++;
  }
  return len;
}

node *removeloop(node *&head)
{
  if (head == NULL)
  {
    return NULL;
  }
  node *slow = head;
  node *fast = head;
  while (fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
      slow = slow->next;
    }
    if (slow == fast)
    {
      slow = head;
      break;
    }
  }
  node *prev = fast;
  while (slow != fast)
  {
    prev = fast;
    slow = slow->next;
    fast = fast->next;
  }
  prev->next = NULL;
  return slow;
}
int main()
{
  node *head = new node(10);
  node *first2 = new node(20);
  node *first3 = new node(30);
  node *first4 = new node(40);
  node *first5 = new node(50);
  node *first6 = new node(60);
  node *first7 = new node(70);
  node *first8 = new node(80);
  node *first9 = new node(90);

  head->next = first2;
  first2->next = first3;
  first3->next = first4;
  first4->next = first5;
  first5->next = first6;
  first6->next = first7;
  first7->next = first8;
  first8->next = first9;
  first9->next = first7;
  removeloop(head);
  print(head);

  return 0;
}