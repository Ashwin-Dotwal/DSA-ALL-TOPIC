#include<iostream>

using  namespace std;
int sumprime(int n){ 
    int sum=0;
    for(int i=2;i<n;i++){ 
    if(n%2==0){ 
        cout<<" not prime"<<endl;
        sum=sum+i;
    }else{ 
        cout<<"prime"<<endl;
       sum=sum+i;
    }
    return 0;
}

}
 int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    int sum=sumprime(n);
 }
