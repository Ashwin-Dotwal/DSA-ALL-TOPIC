#include<iostream>
#include<vector>
using namespace std;
int main (){


    int arr[2][2]={{5,6},{1,9}};
    int key;
    cout<<" enter thew value of key "<<endl;
    cin>>key;
  for(int i=0;i<2;i++){
for(int j=0;j<2;j++)
  if(arr[i][j]==key)
        
        cout<<key<<endl;
        else{
            cout<<" not found"<<endl;
        }
  }  
  
  
  for(int i=0;i<2;i++){
for(int j=0;j<2;j++)
  if(arr[i][j]==key)
       
        cout<<key<<endl;
         else{
            cout<<" not found"<<endl;
        }
  }
    return 0;
}