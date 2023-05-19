#include <iostream>
#include <string>

using namespace std;

void printArray(int *nums, int count)
{
	cout << "Printing array: ";
	for (int i = 0; i < count; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	return;
}

int main()
{
	// normal string variable
	string str = "Pointers!";
	// pointer variable
	// "string *" denotes string pointer
	// "&str" denotes the address of the variable "str"
	string *pstr = &str;
	// the variable pstr is a pointer that points to the address of str.

	// adding "*" before a pointer variable tells the compiler
	// to look at data at the address stored in the pointer variable
	cout << "*pstr: " << *pstr << endl;
	// *pstr == &str
	// *&str == str
	cout << "*&str: " << *&str << endl;

	// pointers are also used for arrays
	// array variables are just pointers to the first item in the array
	int nums[] = {5, 3, 2, 6, 1, 3, 5, 2};
	cout << "Array variable: " << nums << endl;
	cout << "Address of first item: " << &nums[0] << endl;

	// Pointers are commonly used to send a reference to a function
	// to avoid having to duplicate large amounts of data.
	printArray(nums, 8);
	// this function simply prints the numbers in the array.
	// instead of copying 8 numbers to the function's scope,
	// the function accesses the array in the original address.

	return 0;
}
