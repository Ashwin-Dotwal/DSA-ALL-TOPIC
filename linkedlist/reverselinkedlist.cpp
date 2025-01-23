#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *prev;
        Node *next;

        Node()
        {
                this->data = 0;
                this->prev = NULL;
                this->next = NULL;
        }
        Node(int data)
        {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
        }

        ~Node()
        {
                cout << "Node with value: " << this->data << " deleted" << endl;
        }
};

void print(Node *&head)
{
        Node *temp = head;

        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int getLength(Node *head)
{
        int len = 0;
        Node *temp = head;

        while (temp != NULL)
        {
                temp = temp->next;
                len++;
        }
        return len;
}

Node *reverseusingRecursion(Node *prev, Node *curr)
{
        // base case
        if (curr == NULL)
                return prev;

        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;

        // recursion sambhal lega
        return reverseusingRecursion(prev, curr);
}

Node *reverseusingloop(Node *head)
{
        Node *prev = NULL;
        Node *curr = head;

        while (curr != NULL)
        {
                Node *temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}

int main()
{

        Node *first = new Node(10);
        Node *second = new Node(20);
        Node *third = new Node(30);
        Node *head = first;
        Node *tail = third;

        first->next = second;
        second->prev = first;

        second->next = third;
        third->prev = second;

        // print(first);
        // cout << endl;

        insertAtHead(head, tail, 101);

        // cout << endl;
        // print(head);

        // cout << endl;

        insertAtTail(head, tail, 501);

        // cout << endl;
        // print(head);

        // cout << endl;

        insertAtPosition(head, tail, 401, 3);

        cout << endl;
        print(head);
        cout << endl;
        deleteFromPos(head, tail, 1);

        cout << endl;
        print(head);
        cout << endl;
        Node *prev = NULL;
        Node *curr = head;
        cout << "printing reverse list" << endl;
        head = reverseusingRecursion(curr, prev);
        head = reverseusingloop(head);
        cout << endl;
        print(head);
        cout << endl;

        return 0;
}