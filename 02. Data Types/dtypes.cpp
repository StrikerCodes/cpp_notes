#include <iostream>

using namespace std;

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
}