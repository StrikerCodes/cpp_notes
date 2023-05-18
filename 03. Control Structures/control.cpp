#include <iostream>
#include <string>

using namespace std;

void ifStructure()
{
	// if structure key words are "if" and "else". "else if" is used for else if structure

	bool conditionA = true;
	bool conditionB = false;
	bool conditionC = false;

	if (conditionA)
	{
		cout << "inside 1st if" << endl;
		if (conditionB)
		{
			cout << "inside 2nd if" << endl;
		}
	}
	else if (conditionC) 
	{
		cout << "inside else if" << endl;
	}
	else
	{
		cout << "inside else" << endl;
	}

}

void switchStructure()
{
	// can be used to drastically simplify single variable if-else structures

	int dayNum = 0;
	string dayStr;
	switch(dayNum) {
		case 0:
			dayStr = "Sunday";
			break; // break out of switch so no other cases are checked
		case 1:
			dayStr = "Monday";
			break;
		case 2:
			dayStr = "Tuesday";
			break;
		case 3:
			dayStr = "Wednesday";
			break;
		case 4:
			dayStr = "Thursday";
			break;
		case 5:
			dayStr = "Friday";
			break;
		case 6:
			dayStr = "Saturday";
			break;
		default: // used if none of the cases above matches with input
			dayStr = "Invalid input";
			break;
	}
	cout << dayStr << endl;	
}

void loopStructure()
{
	bool conditionA = false;
	bool conditionB = false;

	while(conditionA)
	{
		cout << "Do something" << endl;
	}

	do {
		cout << "Do something" << endl;
	} while(conditionB); // <-- do-while loops need semi-colon after while condition

	// for(statement 1; statement 2; statement 3)
	// statement 1 is executed once before the code block
	// statement 2 is checked as a condition for every iteration
	// statement 3 is executed at the end of every loop

	for (int i = 0; i < 3; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	
	// for-each loop
	int nums[] = {3, 1, 2};
	// for(type individual: array)
	for(int n: nums)
	{
		cout << n << " ";
	}
	cout << endl;

}

int main()
{
	cout << "Control structures:" << endl;
	cout << "if structure:" << endl;
	ifStructure();
	cout << "======================" << endl;
	cout << "switch structure:" << endl;
	switchStructure();
	cout << "======================" << endl;
	cout << "loop structure:" << endl;
	loopStructure();
	cout << "======================" << endl;
}

