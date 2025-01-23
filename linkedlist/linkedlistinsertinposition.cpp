//insert at any position
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node*&head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void inseatatposition(int position, Node* &head Node* &tail){
//step1: find the position prev and current
  if(head==NULL){
    Node*newNode=new Node(data);
    head=newNode;
    tail=newNode;
    return;


  }
}




int main(){

Node*head=new Node(10);
Node*tail=new Node(21);
insertAttail(head,tail,77);
insertAthead(head,tail,20);
insertAthead(head,tail,30);
insertAthead(head,tail,40);
insertAthead(head,tail,50);
print(head);
print(tail);
    return 0;
}