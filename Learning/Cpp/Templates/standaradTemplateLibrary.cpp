#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//creating a vector to store int
	vector<int> vec;
	int i;


	//vec.size() represents the size of the vector.
	cout << "vector size : " << vec.size() << endl;


	//vec.push_back(). Appending values to vectors
	for(i=0; i<5; i++)
	{
		vec.push_back(i);
	}

	//vec[i] accessing values.
	for(i=0; i<5; i++)
	{
		cout<<vec[i]<<endl;
	}


	//vector<int>::iterator is used to iterate starting from a specific v value
	vector<int>::iterator v = vec.begin();
	while (v != vec.end())
	{
		cout<<*v<<endl;
		//this v is like a pointer. It cannot be used without dereferncing or something.
		v++;
	}
}