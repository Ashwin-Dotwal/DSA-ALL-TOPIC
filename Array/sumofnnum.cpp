 #include<iostream>
 using namespace std;
 int getsum(int n){ 
    int sum=0;
    for(int i=0;i<=n;i++){ 
        sum=sum+i;
    }
    return sum;
 }
 int main(){ 
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int sum=getsum(num);
    cout<<sum<<endl;
 }
