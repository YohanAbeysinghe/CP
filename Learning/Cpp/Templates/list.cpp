#include <iostream>
#include <list>
using namespace std;


//List is a STL. 
//First in First Out.
//Non-contguous memory allocation. I suppose data is not
//sharing a boarder. That might mean data is not located 
//closer to each other.



int main()
{
	list<int> stack;
	stack.push(21);		//Last in. Adding something to the end
	stack.push(20);
	stack.push(19);

	stack.pop(); //First out. Removed what is at the end.

	while (!stack.empty())				//checking wether the stack is empty
	{
		cout << stack.top() << endl;	//Finding whats at the top of the stack.
		stack.pop();					//Removing whats at the top of the stack.
	}

}