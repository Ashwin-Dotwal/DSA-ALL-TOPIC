#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> v, int arr,int s,int e,int key){
    //base case
    if(s>e)
    return -1;
    int mid=s+e/2;
    if(arr[mid]==key)
    return mid;
if(arr[mid]<key){
    return binarysearch(arr,mid+1,e,key);

}
else{
    return binarysearch(arr,mid-1,e,key);

}
    
}
int main(){
    int vector<int>v{10,20,30,50,60,80,90};
    int n=v.size();
    int s=0;
    int e=n-1;
    int target=50;
    int ans=binarysearch(v,s,n,e,target);
    
    cout<<"ans is"<<ans<<endl;
    return 0;
}