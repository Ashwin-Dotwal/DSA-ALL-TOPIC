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
// i want to insert a node right at the head of linked list
void insertatHEAD(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
}

// i want to insert a node right at the end of linked list
void insertattail(node *&head, node *tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    node *newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *head = NULL;
    node *tail = (NULL);
    insertatHEAD(head, tail, 44);
    insertatHEAD(head, tail, 55);
    insertattail(head, tail, 45);
    print(head);

    return 0;
}