 #include<iostream>
 using namespace std;
 int getevensum(int n){ 
    int sum=0;
    for(int i=0;i<=n;i=i+2){ 
        sum=sum+i;
    }
    return sum;
 }
 int main(){ 
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int evensum=getevensum(num);
    cout<<evensum<<endl;
 }
