#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}
void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
Node*reverse(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    Node*next=curr->next;
    while (curr!=NULL)
    {

    next=Curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
        
    }
    return prev;
    
}




    //reverse ans linked list


int main(){
    Node*head1=new Node(2);
    Node*second2=new Node(4);
    head1->next1=second1;

    Node*head2=new Node(2);
    Node*second2=new Node(3);
    Node*third2=new Node(4);
    head2->next=second2;
    second2->next=third2;

   Node*ans= solve(head1,head2);

   print (ans);
    return 0;
}