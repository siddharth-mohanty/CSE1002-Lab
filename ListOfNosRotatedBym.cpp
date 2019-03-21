#include<iostream> 
#include <vector> 
#include<algorithm>
using namespace std; 
int main() 
{vector<int> v1; 
int input,m; 
int count=0; 
while (cin >> input)
    {v1.push_back(input);
     count++;
    }
m=v1[count-1];
v1.erase(v1.begin()+count-1);
v1.erase(v1.begin());
count-=2;
v1.shrink_to_fit(); 
cout << "\nVector elements after rotation are: "; 
for (auto it = v1.begin()+count-m; it != v1.end(); it++) 
cout << *it << " ";
for (auto it = v1.begin(); it != v1.end()-m; it++) 
cout << *it << " ";   
return 0;
}
