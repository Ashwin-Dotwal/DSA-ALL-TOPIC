#include<iostream>
#include<vector>
using namespace std;
int main(){ 
  
    int brr[3][3]={{1,2,3},{4,5,6},{2,7,8}};
    cout<<"row vise "<<endl;
    //row vise code
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
cout<<brr[i][j]<<" ";
        }cout<<endl;

    }
    cout<<endl;
    cout<<"col vise"<<endl;
    //columbe vise code
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
cout<<brr[j][i]<<" ";
        }cout<<endl;

    } 
     
    return 0;
}
