#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, Node *tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1
    Node *newNode = new Node(data);
    // step2
    newNode->next = head;
    // step3
    head = newNode;
}
void insertAttail(Node *&head, Node *tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1
    Node *newNode = new Node(data);
    // step2
    tail->next = newNode;
    // step3
    tail = newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *tail = new Node(21);
    insertAttail(head, tail, 77);
    insertAthead(head, tail, 20);
    insertAthead(head, tail, 30);
    insertAthead(head, tail, 40);
    insertAthead(head, tail, 50);
    print(head);
    print(tail);
    return 0;
}