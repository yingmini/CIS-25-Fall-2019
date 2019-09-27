/**
 * Program Name: Cis25Fall2019YingLHw1Ex1.cpp
 * Discussion:   Hw1, Ex1
 * Written By:   Ying Hsuen Lin
 * Date:         2019/09/03
 */

#include <iostream>
using namespace std;

void runMenu(void);
int getSmallestIntegerWithSmallestTODC(int[], int);
int getSmallestTODC(int[], int);
int getIntWithSmallestTODC(int[], int);
int getTODC(int);

int main()
{
	cout << "CIS 25 - C++ Programming\n"
		<< "Laney College\n"
		<< "Ying Hsuen Lin\n\n"
		<< "Assignment Information --\n"
		<< "  Assignment Number: Homework 01,\n"
		<< "                     Exercise #1\n"
		<< "  Written by:        Ying Hsuen Lin\n"
		<< "  Due Date:          2019/09/03";

	runMenu();

	return 0;
}

void runMenu()
{
	int option;
	int* iPtr = nullptr;
	int usrSize;
	
	do
	{
		cout << "\n\n********************************************\n"
			<< "*                MENU - HW #1              *\n"
			<< "*  1. getSmallestIntegerWithSmallestTODC() *\n"
			<< "*  2. Quit                                 *\n"
			<< "********************************************\n"
            << "Select an option (use integer value only): ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "\nWhat is the size of the array? ";
			cin >> usrSize;
			cout << "\n";

			if (iPtr != nullptr)
			{
				delete[] iPtr;
				iPtr = nullptr;
			}

			iPtr = new int[usrSize];
			for (int i = 0; i < usrSize; i++)
			{
				cout << "  Value #" << i + 1 << ": ";
				cin >> iPtr[i];
				
			}

			cout << "\nThe working array has " << usrSize << " values of";
			for (int i = 0; i < usrSize; i++)
				cout << "\n  " << iPtr[i];

			cout << "\n\nCalling getSmallestIntegerWithSmallestTODC()"
				<< " with arguments of\n";

			cout << "    1. The array of {";
			for (int i = 0; i < usrSize - 1; i++)
				cout << iPtr[i] << ", ";
			cout << (iPtr[usrSize - 1]) << "}; and\n";

			cout << "    2. The array size of " << usrSize;
			
			cout << "\n\nThe smallest integer and the smallest"
				<< " total odd digit count is " 
				<< getSmallestIntegerWithSmallestTODC(iPtr, usrSize);

			break;
		case 2:
			cout << "\n  Having Fun ..." << endl;

			break;
		default:
			cout << "\nYou are very funny here!";
		}
	} while (option != 2);
}

int getSmallestIntegerWithSmallestTODC(int ary[], int size)
{
	int smallestIntegerWithSmallestTODC =
		getIntWithSmallestTODC(ary, size);
	int smallestTODC = getSmallestTODC(ary, size);

	for (int i = 0; i < size; i++)
	{
		if (getTODC(ary[i]) == smallestTODC)
		{
			if (smallestIntegerWithSmallestTODC > ary[i])
			{
				smallestIntegerWithSmallestTODC = ary[i];
			}
		}
	}

	return smallestIntegerWithSmallestTODC;
}

int getIntWithSmallestTODC(int ary[], int size)
{
	int valueWithSmallestTODC;
	int smallestTODC = getSmallestTODC(ary, size);

	for (int i = 0; i < size; i++)
	{
		if (getTODC(ary[i]) == smallestTODC)
		{
			valueWithSmallestTODC = ary[i];
		}
	}

	return valueWithSmallestTODC;
}

int getSmallestTODC(int ary[], int size)
{
	int smallestTODC = getTODC(ary[0]);

	for (int i = 0; i < size; i++)
	{
		if (smallestTODC > getTODC(ary[i]))
		{
			smallestTODC = getTODC(ary[i]);
		}
	}

	return smallestTODC;
}

int getTODC(int arg)
{
	int oddDigitCount = 0;

	do
	{
		if (arg % 2)
		{
			oddDigitCount++;
		}
		arg /= 10;
	} while (arg);

	return oddDigitCount;
}

/** Program Output
CIS 25 - C++ Programming
Laney College
Ying Hsuen Lin

Assignment Information --
Assignment Number: Homework 01,
Exercise #1
Written by:        Ying Hsuen Lin
Due Date:          2019/09/03

********************************************
*                MENU - HW #1              *
*  1. getSmallestIntegerWithSmallestTODC() *
*  2. Quit                                 *
********************************************
Select an option (use integer value only): -4

  You are very funny here!

********************************************
*                MENU - HW #1              *
*  1. getSmallestIntegerWithSmallestTODC() *
*  2. Quit                                 *
********************************************
Select an option (use integer value only): 1

What is the size of the array? 3

  Value #1: 1004
  Value #2: -2103451
  Value #3: 80645

The working array has 3 values of
  1004
  -2103451
  80645

Calling getSmallestIntegerWithSmallestTODC() with arguments of
1. The array of {1004, -2103451, 80645}; and
2. The array size of 3

The smallest integer and the smallest total odd digit count is 1004

********************************************
*                MENU - HW #1              *
*  1. getSmallestIntegerWithSmallestTODC() *
*  2. Quit                                 *
********************************************
Select an option (use integer value only): 1

What is the size of the array? 4

  Value #1: -1
  Value #2: -22
  Value #3: 88
  Value #4: 66

The working array has 4 values of
  -1
  -22
  88
  66

Calling getSmallestIntegerWithSmallestTODC() with arguments of
   1. The array of {-1, -22, 88, 66}; and
   2. The array size of 4

The smallest integer and the smallest total odd digit count is -22

********************************************
*                MENU - HW #1              *
*  1. getSmallestIntegerWithSmallestTODC() *
*  2. Quit                                 *
********************************************
Select an option (use integer value only): 1

What is the size of the array? 5

  Value #1: 1
  Value #2: -3
  Value #3: 9
  Value #4: -7
  Value #5: 5

The working array has 5 values of
  1
  -3
  9
  -7
  5

Calling getSmallestIntegerWithSmallestTODC() with arguments of
    1. The array of {1, -3, 9, -7, 5}; and
    2. The array size of 5

The smallest integer and the smallest total odd digit count is -7

********************************************
*                MENU - HW #1              *
*  1. getSmallestIntegerWithSmallestTODC() *
*  2. Quit                                 *
********************************************
Select an option (use integer value only): 2

  Having Fun ...
 */

/** Logic Code Output Issues
No Comments!
 */