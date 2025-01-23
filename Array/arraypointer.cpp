#include<iostream>
using namespace std;
int main(){
    int arr[10]={17,55,8,6,9,21,35,31,54,55};
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
int *p=arr;
cout<<p<<endl;
cout<<&p<<endl;

cout<<*arr<<endl;
cout<<*arr+1<<endl;
cout<<*(arr)+1<<endl;
//d/fbetweenarrandpointer
cout<<sizeof(arr)<<endl;
cout<<sizeof(p)<<endl;
}