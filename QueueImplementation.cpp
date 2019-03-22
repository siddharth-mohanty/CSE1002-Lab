#include<iostream>
#include<vector>
using namespace std;
class QUEUE
{
	public: 
	vector<int> queue; //initializing vector
	vector <int> :: iterator it; //initializing iterator
	
	void insert(int n) //Inserting element n
	{
	 queue.push_back(n);	
	}
	
	void Delete(int index) //Deleting element at a particular index
	{
		queue.erase(queue.begin()+index-1);
	}
	
	int atfront() //First element of the queue
	{
	 	return queue[0];		
	}
	
	int atrear() //Last Element of the queue
	{
		return queue[queue.size()-1]; 
	}
	
	void display()
	{
		for(it = queue.begin(); it != queue.end(); it++) 
		cout << *it << " ";
	}
	
};

int main()
{
	int input;
	QUEUE q1;
	while(cin>>input)
	{
		q1.insert(input);
	}
	
	q1.display();
	return 0;
}
