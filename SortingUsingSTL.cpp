//Sorting using STL
#include<iostream> 
#include<vector> 
#include<algorithm>
using namespace std; 
int main() 
{   

	int arr[10]={5,4,2,7,6,4,8,9,6,2}; 
	
	sort(arr,arr+5); //Only first 5 elements will be sorted
	for(int i=0;i<10;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
	
	
