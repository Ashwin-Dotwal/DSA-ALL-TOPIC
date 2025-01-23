 #include<iostream>
 using namespace std;
 int getoddsum(int n){ 
    int sum=0;
    for(int i=1;i<=n;i=i+2){ 
        sum=sum+i;
    }
    return sum;
 }
 int main(){ 
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int oddsum=getoddsum(num);
    cout<<oddsum<<endl;
 }
