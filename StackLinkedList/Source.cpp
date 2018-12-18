#include <iostream>
#include "linkedStack.h"

using namespace std;

void testCopy(linkedStackType<int> Ostack);

int main() {

	linkedStackType<int> stack;
	linkedStackType<int> stack2;
	linkedStackType<int> copyStack;

	//Adding Elements to Stack 
	stack.push(15);
	stack.push(30);
	stack.push(55);

	copyStack = stack;

	cout << "The Numbers in The Stack are: " << endl;

	while (!stack.isEmptyStack()) {

		cout << stack.top() << endl;
		stack.pop();
	}

	

	testCopy(copyStack);

	cout << "Testing Copy" << endl;

	while (!copyStack.isEmptyStack()) {
		cout << copyStack.top() << endl;
		copyStack.pop();
	}

	system("pause");
	return 0;
}

//Function to test the copy constructor
void testCopy(linkedStackType<int> OStack)
{
	cout << "Stack in the function testCopy:" << endl;
	while (!OStack.isEmptyStack())
	{
		cout << OStack.top() << endl;
		OStack.pop();
	}
}

