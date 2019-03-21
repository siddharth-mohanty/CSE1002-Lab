#include<iostream>
using namespace std;
int main(){
int n, arr[n], max=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]>max)
max=arr[i];}
if(max!=arr[n-1])
cout<<max;
else
cout<<"No leader";
return 0; }
