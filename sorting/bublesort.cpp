#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int>arr{5,6,2,7,1,3};
    int n= arr.size();

    //selection sort
    for(int round=1;round<n;round++){
       
        for(int j=0;j<n-round;j++){
            if(arr[j]>arr[j+1]){ 
        swap(arr[j],arr[j+1]);
        }
    }
    
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}