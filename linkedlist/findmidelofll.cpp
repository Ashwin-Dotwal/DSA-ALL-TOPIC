#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node()
  {
    this->data = 0;
    this->next = NULL;
  }
  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void print(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
node *getmidel(node *&head)
{
  if (head == NULL)
  {
    cout << "ll is empty" << endl;
  }
  if (head->next == NULL)
  {
    return head;
  }
  node *slow = head;
  node *fast = head;
  while (slow != NULL && fast != NULL)
  {
    fast = fast->next;

    if (fast != NULL)
    {
      fast = fast->next;
      slow = slow->next;
    }
  }
  return slow;
}
int main()
{
  node *head = new node(10);
  node *second = new node(20);
  node *third = new node(30);
  node *fourth = new node(40);
  node *fifth = new node(50);
  // node*sixth=new node(60);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  // fifth->next=sixth;
  cout << "printing the ll" << endl;
  print(head);

  cout << "middel node is " << getmidel(head)->data << endl;

  return 0;
}
// class Solution {
// public:
// int getlength(ListNode*&head){
//   int i=0;
// ListNode*temp=head;
// while(temp!=NULL){
//   temp=temp->next;
// i++;
//}return i;
//}
//  ListNode* middleNode(ListNode* head) {
//    int mid;
//  int len=getlength(head);
// if(len%2==0){
//   mid=(len+2)/2;
//}
// else{
//  mid=(len+1)/2;
//}
// int i=0;
// ListNode*temp=head;
// while(i<mid-1){
//  temp=temp->next;
// i++;

//}
// return temp;
// }
//};