#include <iostream>
using namespace std;
int main (){
    //declare 2d array
    int arr[4][3];
    int rows=4;
    int cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<" print row wise"<<endl;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    
    //declare initiali
    int brr[3][3]=
     { {1,2,3},
      {4,5,6},
      {7,8,9}};
    cout<<brr[1][1]<<endl;

    return 0;
}