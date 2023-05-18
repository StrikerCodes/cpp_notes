#include <iostream>
#include <functional>

using namespace std;

void function1()
{
	cout << "executing function1" << endl;
}

void innerFunction()
{
	cout << "executing innerFunction" << endl;
}

void outerFunction()
{
	cout << "beginning of outerFunction" << endl;
	cout << "calling innerFunction" << endl;
	innerFunction();
	cout << "end of outerFunction" << endl;
}

string returnEnd()
{
	return "return string";
	cout << "not executed" << endl;
}

void countDown(int num)
{
	if(num < 0)
	{
		return;
	}

	cout << num << endl;
	countDown(num - 1);
}

int main()
{
	cout << "Calling function1: " << endl;
	function1();

	// std::function declared by functional library
	// allows variables to store functions
	function funcVar = function1;
	cout << "Calling funcVar" << endl;
	funcVar();

	// function calls can be nested, executing in the order they are called
	// outer functions that calls other functions in the middle will finish
	// executing the second half after the inner function is returned
	cout << "Calling outerFunction" << endl;
	outerFunction();

	// functions can return values, and can be used in line as if it is a variable
	cout << "Printing (Calling returnEnd)" << endl;
	cout << returnEnd() << endl;
	// "not executed" is not printed as it is after a return statement.

	// functions can take in parameters to modify its behavior.
	// functions can also call themselves, making them recursive.
	cout << "Calling countDown" << endl;
	countDown(5);

}
