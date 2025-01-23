 #include<iostream>
 using namespace std;
 int reverse(int n){ 
    while(n!=0){
       int  lastdigit=n%10;
       int reverse =0;
        reverse=reverse*10+lastdigit;
        n=n/10;
       cout<<reverse<<endl;
    }
   
 }
 int main(){ 
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int reverse(n);
    cout<<"ans is"<<reverse<<endl;
 }
 