#include<iostream>
#include<string.h>
using namespace std;



//for reverse string
void reverseStr(string&str)
{
    int s=0;
      int n=str.length();
    int e= n-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;

    }
}
int main(){
    string str="ashwin";
   
     reverseStr(str);
    cout << str;

    return 0;
}
// using stack 

class Solution {
public:
    void reverseString(vector<char>& s) {
   stack<char>st;

     for(int i=0;i<s.size();i++){
        st.push(s[i]);
     }
     s.clear();
     while(!st.empty()){
       s.push_back(st.top());
        st.pop();
     }
     
    }
};


//reverse string in leetcode
class Solution {
public:
    void reverseString(vector<char>& s) {
 int start=0;
 int e=s.size()-1;
    while(start<=e){
    swap(s[start],s[e]);
    start++;
    e--;
 }
     
    }
};