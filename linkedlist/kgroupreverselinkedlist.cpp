#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){
        this->data=0;
        this->next=NULL;

    }
    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void print(node* head){ 
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  
}
int getlength(node*&head){
    int len=0;
    node*temp=head;
    while (temp!=NULL)
    {temp=temp->next;
    len++;
        /* code */
    }
    return len;
    
}
      
    node*reverseknodes(node*head,int k){
        if(head==NULL){
            cout<<"ll is empty"<<endl;
            return NULL;
        }
        int len=getlength(head);
        if(k>len){
            cout<<"enter valid value"<<endl;
            return head;
        }
     
    node*prev=NULL;
    node*curr=head;
    node*forword =curr->next;
    int count=0;
    while(count<k){
        forword=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forword;
        count++;
    }
    if(forword!=NULL){
        head->next=reverseknodes(forword,k);
    }
    return prev;
}
int main(){
    node*first=new node(10);
     node*second=new node(20);
      node*third=new node(30);
       node*fourth=new node(40);
        node*fifth=new node(50); 
        node*sixth=new node(60);

        first->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=fifth;
        fifth->next=sixth;
        cout<<"printing the ll"<<endl;
        //print(first);

        first=reverseknodes(first,3);
        print(first);

    return 0;
}