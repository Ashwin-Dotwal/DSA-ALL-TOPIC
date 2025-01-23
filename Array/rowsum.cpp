#include<iostream>
#include<vector>
using namespace std;
 void rowsum(int arr[][3],int row,int col){ 
  //row sum row vise trsvese 
  for(int i=0;i<row;i++){
    int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
 }cout<<sum<<endl;
  }
 }
int main(){ 
    int arr[3][3];
    int row=3;
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
rowsum(arr,row,col);
    } 
     
    return 0;
}
