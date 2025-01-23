#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creating
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
   
    //remove
    st.pop();
    //check element on top
    cout<<"element on top is:"<<st.top()<<endl;
    cout<<"sizeof stack is:"<<st.size()<<endl;
    if(st.empty())
        cout<<"stack is empty"<<endl;
    
    else{
        cout<<" stack is not empty"<<endl;
    }


    // print stack
    stack<int>s;

   
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); 
    s.push(60);

    while (!s.empty()){
        
        cout<<s.top()<<" ";
              s.pop();
 }
    cout<<endl;
    
    return 0;
}