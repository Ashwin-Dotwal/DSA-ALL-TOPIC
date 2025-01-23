3.14 #include<iostream>
 using namespace std;
 
 float area(float r,float i){ 
   float areaofcircle=i*r*r;
   return areaofcircle;
 }
 int main(){ 
    float r;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    float i;
    cout<<"enter the value of i"<<endl;
    cin>>i;
    float areaofcircle=area(r,i);
    cout<<" area of circle is"<<areaofcircle<<endl;
 }
