/* Here, I converted the string into a vector and added the elements in reverse order.
Wasn't necessary to create a vector, I was just having some fun. */

#include<iostream>
#include<vector>
#include<string>
using namespace std;
string rotateString(vector<char> v, string newString)
{
if(v.size()!=0){newString+=v[v.size()-1];
    v.pop_back();
    return rotateString(v, newString);}
    
if(v.size()==0)
return newString;}

int main()
{string s, newString="";
cin>>s;
vector<char> v(s.begin(), s.end());
cout<<"Reversed String:"<<rotateString(v, newString);
return 0;}
