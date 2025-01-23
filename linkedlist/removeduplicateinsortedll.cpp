#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        /* code */
    }
}

// code for remove duplicate
void removeDuplicate(ListNode *head)
{
    if (head == NULL)
    {
        cout << "ll is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << "single node in ll" << endl;
        return;
    }

    ListNode *curr = head;
    while (curr != NULL)
    {

        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            // equale
            ListNode *temp = curr->next;
            curr->next = curr->next->next;
            // delete node
            temp->next = NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(1);
    ListNode *fourth = new ListNode(3);
    ListNode *fifth = new ListNode(4);
    ListNode *sixth = new ListNode(3);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    cout << " input ll:  ";
    print(head);

    removeDuplicate(head);
    cout << "output ll: ";
    print(head);
    return 0;
}