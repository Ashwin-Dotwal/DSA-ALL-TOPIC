#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;



    node(){
    this->data=0;
    this->prev=NULL;
    this->next=NULL;
    } 

    
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
};
void print(node*&head){
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}
int getlength(node*&head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertathead(node*&head,node*&tail,int data){
    if(head==NULL){
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        node*newnode=new node(data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void insertattail(node*&head,node*&tail,int data){
    if(head==NULL){
        node*newnode=new node(data);
        tail=newnode;
         head=newnode;

    }
    else{
        node*newnode=new node(data);
         tail->next=newnode;
         newnode->prev=tail;
         tail=newnode;
    }
}
int main(){
    node*first1=new node(20);
    node*first2=new node(13);
    node*first3=new node(15);
    node*first4=new node(18);
    node*head=first1;
    node*tail=first4;
    first1->next=first2;
    first2->prev=first1;
    first2->next=first3;
    first3->prev=first2;
    first3->next=first4;
    first4->prev=first3;
    print(first1);
    cout<<endl;
    insertathead(head,tail,101);
    cout<<endl;
    print(head);
 
 cout<<endl;
    insertattail(head,tail,501);
    cout<<endl;
    print(head);

    return 0;
}