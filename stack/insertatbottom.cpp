#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>& s,int target){
  
//base case
        if(s.empty()){
        s.push(target);
        return;
    }

    int topelement=s.top();
    s.pop();
    //recursive call
     insertatbottom(s,target);
  
    //backtracking
    s.push(topelement);
  
}
int main(){
    stack<int>s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

     if(s.empty()){
        cout<<"stack is empty,cant insert at bottom"<<endl;
        return 0;    
     }
     int target=s.top();
                s.pop();
    insertatbottom(s,target);
    cout<<"printing"<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
    s.pop();
        
    }
    cout<<endl;
    return 0;
}