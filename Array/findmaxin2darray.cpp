#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
 int getmaxi(int arr[][3],int row,int col){ 
  int maxi=INT_MIN;
  for(int i=0;i<row;i++){
    
        for(int j=0;j<col;j++){
        if(arr[i][j]>maxi){
            maxi=arr[i][j];
        }
 
  }
  }
  return maxi;
 
  
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

    } 
     cout<<getmaxi(arr,row,col)<<endl;
    return 0;
}
