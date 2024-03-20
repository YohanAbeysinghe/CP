#include <iostream>
#include <stack>
using namespace std;


//Stack is a STL. 
//Last in First Out.

int main()
{
	stack<int> stack;
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

