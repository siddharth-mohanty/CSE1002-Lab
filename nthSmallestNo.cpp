#include<iostream> 
#include<vector> 
#include<algorithm>
using namespace std; 
int main() 
{   vector<int> v1;
    int input,n; 
    int count=0;
    cin>>n;
    while (cin >> input){v1.push_back(input);
    count++;}
    make_heap(v1.begin(),v1.end()); //v1 is converted into a MAXHEAP
    for(int i=count;i>n;i--)
    {pop_heap(v1.begin(),v1.end());
    v1.pop_back();} 
    cout<<v1.front()<<endl;  
    return 0; } 
