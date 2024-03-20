#include <iostream>
using namespace std;

int main()
{
	void* ptr = nullptr; //Method to create a pointer. Zero is not a valid memory address. So this is invalid.
	//void* ptr = NULL;
	//void* ptr = 0;

	int var = 8;
	void* ptr1 = &var;	//&var is created with a memory address.
	//&var finds that memory location and put the adress to ptr1. 
	//void pointers does not know what type of data is stored in that memory. So
	//they cannot be dereferenced.

	int var1 = 8;
	double* ptr2 = (double*)&var1; //This cast the var from int to double.

	int var2 = 8;
	int* ptr3 = &var2; 
	*ptr3 = 10;		//dereferencing. This is used to change the value
	//stored in the memory addresss 10.
	cout << var2;


	

	return 0;
}