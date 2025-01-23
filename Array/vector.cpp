#include<iostream> 
#include<vector>
using namespace std;
int main (){ 
    //creat vector
  vector<int>arr{10,-1};
cout<<"size of 10"<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;

}