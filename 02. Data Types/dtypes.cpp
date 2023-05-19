#include <iostream>

using namespace std;

void printArr(int nums[], int length)
{
	cout << "Printing array: ";
	for(int i = 0; i < length; i++) 
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}

int main()
{
	/*
	true or false values
	takes up 1 byte
	*/
	bool boolean = true;
	cout << "boolean: " << boolean << endl;
	cout << "size: " << sizeof(boolean) << endl;
	
	/*
	single character/letter/number or ASCII value
	tekes up 1 byte
	signed or unsigned
	*/
	char character = '#';
	cout << "character: " << character << endl;
	cout << "size: " << sizeof(character) << endl;

	/*
	whole numbers
	size depends on implementation (usually 4 bytes)
	other integer types by size: short, int, long, long long
	signed or unsigned
	*/
	int integer = 0;
	// unsigned long long biggest = 18,446,744,073,709,551,615; // 18 quintillion
	cout << "integer: " << integer << endl;
	cout << "size: " << sizeof(integer) << endl;

	/*
	decimal numbers
	float - 4 bytes
	double - 8 bytes
	*/
	float fpnumber = 1.23;
	cout << "fpnumber: " << fpnumber << endl;
	cout << "size: " << sizeof(fpnumber) << endl;
	double decimal = 1.23;
	cout << "decimal: " << decimal << endl;
	cout << "size: " << sizeof(decimal) << endl;

	// arrays are declared with []
	int numsA[4] = {3,2,1,5};
	printArr(numsA, 4);
	// length can be omitted
	int numsB[] = {3,2,5};
	printArr(numsB, 3);
	// values can also be inserted later
	int numsC[5];
	numsC[0] = 0;
	numsC[1] = 1;
	printArr(numsC, 2);

}