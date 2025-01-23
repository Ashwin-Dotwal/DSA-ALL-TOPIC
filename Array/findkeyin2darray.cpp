#include<iostream>
#include<vector>
using namespace std;
bool findkey(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
    if(arr[i][j]==key)
        return true;
    
}
    }
    return false;
}
 
int main(){ 
    int arr[4][3];
    int row=4;
    int col=3;
    //row vise code
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
       cin>>arr[i][j];
        }

    }
    //columbe vise code
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
       cout<<arr[i][j]<<" ";
        }cout<<endl;
int key=10;
cout<<findkey(arr,3,3,key);
    } 
     
    return 0;
}
