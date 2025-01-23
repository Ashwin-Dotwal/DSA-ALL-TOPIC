#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){ 
            return 1;

        }
        else{ 
            return -1;
        }
    }
}
int main(){
int arr[5]={1,7,8,9,4};
int size=5;
cout<<"enter the key to find"<<endl;
int key;
cin>>key;

if(find(arr,size,key)){
cout<<"found"<<endl;
}else{ 
    cout<<"not found"<<endl;
}
 return 0;
 }