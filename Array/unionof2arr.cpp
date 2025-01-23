#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    int arr[]={1,2,3,5,6};
    int sizea=5;
    int brr[]={4,1,9,1};
    int sizeb=4;
   vector<int>ans;
   for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
   }
   for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);
}
cout<<"printing array"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}


//code for union of two array

  set<int>s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(arr1[i]);
        }
        
        for(int i=0;i<m;i++)
        {
            s.insert(arr2[i]);
        }
        
        vector<int>ans;
        
        for(auto i : s)
        {
            ans.push_back(i);
        }
        return ans;