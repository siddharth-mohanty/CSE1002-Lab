//Searching
#include<iostream> 
#include<vector> 
#include<algorithm>
using namespace std; 
int main() 
{   

	int arr[10]={5,4,2,7,6,4,8,9,6,2}; 
	sort(arr,arr+10); //Since binary search needs a sorted array
 	if(binary_search(arr, arr + 10, 2)) 
        cout<<"Element found in the array";
    else
        cout<<"Element not found in the array"; 

	
	return 0;
}
	
   
