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
//check loop is present or note
bool checkforloop(node*&head){
    if(head==NULL){
        cout<<"ll is empty"<<endl;
        return false;

    }
    node*fast=head;
    node*slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }

        return false;
}
//starting point in loop

node* startingPointLoop(node* &head) {
        if(head == NULL) {
                cout << "LL is empty "<< endl;
                return NULL;
        }

        node* slow = head;
        node* fast = head;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }

                if(slow == fast ) {
                       slow = head;
                       break;
                }
        }

        while(slow != fast) {
                slow = slow -> next;
                fast =fast -> next;
        }

        return slow;
        

}
//remove loop or delete loop

node* removeLoop(node* &head) {
        if(head == NULL) {
                cout << "LL is empty "<< endl;
                return NULL;
        }

        node* slow = head;
        node* fast = head;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }

                if(slow == fast ) {
                       slow = head;
                       break;
                }
        }

        node* prev = fast;
        while(slow != fast) {
                prev = fast;
                slow = slow -> next;
                fast =fast -> next;
        }
        prev -> next = NULL;
        return slow;
}

int main(){
    node*head=new node(10);
     node*second=new node(20);
      node*third=new node(30);
       node*fourth=new node(40);
        node*fifth=new node(50); 
        node*sixth=new node(60);
        node*seventh=new node(70);
        node*eighth=new node(80);
        node*ninth=new node(90);

        head->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=fifth;
        fifth->next=sixth;
        sixth->next=seventh;
        seventh->next=eighth;
        eighth->next=ninth;
        ninth->next=second; 
        cout<<"loop is present or not"<<checkforloop(head)<<endl;
    
          
        
       cout<<"starting point of loop"<<startingPointLoop(head)->data<<endl;
       removeLoop(head);
     
  print(head);
    return 0;
}