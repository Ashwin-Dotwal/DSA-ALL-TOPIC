

#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {if(arr[mid]==target){
        return mid;
    }else if(target>arr[mid]){
        start=mid+1;

    }else{ end=mid-1;
    }
    mid=start+(end-start)/2;
    }return -1;
    
}
int main(){
    int arr[]={2,3,6,8,10,12,16};
    int size=7;
    int target =18;
    int findoftarget=binarysearch(arr,size,target);
    if(findoftarget==-1){
        cout<<"targetnot found"<<endl;

    }
    else{
        cout<<"taret found at"<<findoftarget<<endl;
    }
    return 0;
    } 