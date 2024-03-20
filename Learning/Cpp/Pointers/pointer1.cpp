#include <iostream>
using namespace std;




//A function to increment an input.
void Increment(int value)
{
	value++;								// In this funtion new variable is created. When we give 'a' as the input
	cout << "value from Increment : " << value << endl;		// it is not taken as it is inside the function.
}




void Increment1(int* value)
{
	(*value)++;								// In this funtion a pointer is taken as the input. No point in increasing the memory address "value".
	//So "value" memory address is derefeerenced and the value stored is taken for incrementing.
	//Brackets are used to save the order of operation.
	cout << "value from Increment1 : " << value << endl;		
}




int main()
{
	int a = 5;


	Increment(a);
	cout << "a from Increment function : " << a << endl;



	Increment1(&a);					//Memory address is passed in using "&a". "int* value = &a;"
	cout << "a from Increment_New function : " << a << endl;

}