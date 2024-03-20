#include <iostream>
using namespace std;



//Reference is referencing an already existing varialbe. So they should be referenced at the point of creation.
//But pointers can be created and assigned later, since it contains a value of the memroy address.




void Increment1(int& value)
{
	value++;			//Since value is a reference now, it can be used to icrement the value a. 
	cout << "value from Increment1 : " << value << endl;		
}




int main()
{
	int a = 5;


	int& ref = a; 				//"int&" whole thing is the "type". This is the way to create a reference.
	//ref only exists in the code. But not in the source code. 


	ref = 2;		//Unlike pointers, References can be used just as the variable. But pointers should be 
	//dereferenced first.
	cout << "a : " << a << endl;



	Increment1(a);					//The value of 'a' is passed. It is referenced by the function. "int& value = a;"
	cout << "a from Increment_New function : " << a << endl;

	int b = 5;
	int c = 8;
	int& ref1 = b;
	ref1 = c;			//reference cannot be used to refer to another varialbe. It just change the old referred variable according to the new expression 	cout << b << endl << c;

}