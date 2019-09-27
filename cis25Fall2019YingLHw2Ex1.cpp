/**
 * Program Name: cis25Fall2019YingLHw2Ex1.cpp
 * Discussion:   Hw2, Ex1
 * Written By:   Ying Hsuen Lin
 * Date:         2019/09/19
 */

#include <iostream>
using namespace std;

void runMenu(void);
int getLIWLUDigitCount(int[], int);
int getLargestUDC(int[], int);
int getUniqueCount(int);

int main()
{
	cout << "CIS 25 - C++ Programming\n"
		<< "Laney College\n"
		<< "Ying Hsuen Lin\n\n"
		<< "Assignment Information --\n"
		<< "  Assignment Number: Homework 02,\n"
		<< "                     Exercise #1\n"
		<< "  Written by:        Ying Hsuen Lin\n"
		<< "  Due Date:          2019/09/19";

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
		cout << "\n\n\n****************************\n"
			<< "*        MENU - HW #2      *\n"
			<< "*  1. getLIWLUDigitCount() *\n"
			<< "*  2. Quit                 *\n"
			<< "****************************\n"
			<< "Select an option (use integer value only): ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "\nWhat is the size of the array? ";
			cin >> usrSize;
			cout << "\n";

			iPtr = new int[usrSize];
			for (int i = 0; i < usrSize; i++)
			{
				cout << "  Value #" << i + 1 << ": ";
				cin >> iPtr[i];
			}

			cout << "\nThe working array has " << usrSize << " values of";
			for (int i = 0; i < usrSize; i++)
				cout << "\n  " << iPtr[i];

			cout << "\n\n  The returning value is " 
				<< getLIWLUDigitCount(iPtr, usrSize);

			delete[] iPtr;
			iPtr = nullptr;
			break;
		case 2:
			cout << "\n  Having Fun ..." << endl;

			break;
		default:
			cout << "\nYou are very funny here!";
		}
	} while (option != 2);
}

int getLIWLUDigitCount(int ary[], int size)
{
	int largestIWLUDC;
	int largestUDC = getLargestUDC(ary, size);

	for (int i = 0; i < size; i++)
	{
		if (getUniqueCount(ary[i]) == largestUDC)
		{
			largestIWLUDC = ary[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (getUniqueCount(ary[i]) == largestUDC &&
			largestIWLUDC < ary[i])
		{
			largestIWLUDC = ary[i];
		}
	}

	return largestIWLUDC;
}

int getLargestUDC(int ary[], int size)
{
	int largestUDC = getUniqueCount(ary[0]);

	for (int i = 0; i < size; i++)
	{
		if (largestUDC < getUniqueCount(ary[i]))
		{
			largestUDC = getUniqueCount(ary[i]);
		}
	}

	return largestUDC;
}

int getUniqueCount(int arg)
{
	int uniqueCount = 0;
	int digitAry[10] = { 0 };
	int lsd;

	if (arg < 0)
		arg = -arg;

	do
	{
		lsd = arg % 10;
		digitAry[lsd]++;
		arg /= 10;
	} while (arg);

	for (int i = 0; i < 10; i++)
	{
		if (digitAry[i])
			uniqueCount++;
	}

	return uniqueCount;
}

/** Program Output
CIS 25 - C++ Programming
Laney College
Ying Hsuen Lin

Assignment Information --
  Assignment Number: Homework 02,
                     Exercise #1
  Written by:        Ying Hsuen Lin
  Due Date:          2019/09/19


****************************
*        MENU - HW #2      *
*  1. getLIWLUDigitCount() *
*  2. Quit                 *
****************************
Select an option (use integer value only): -4

You are very funny here!


****************************
*        MENU - HW #2      *
*  1. getLIWLUDigitCount() *
*  2. Quit                 *
****************************
Select an option (use integer value only): 1

What is the size of the array? 3

  Value #1: 1004
  Value #2: -2103451
  Value #3: 80645

The working array has 3 values of
  1004
  -2103451
  80645

  The returning value is -2103451


****************************
*        MENU - HW #2      *
*  1. getLIWLUDigitCount() *
*  2. Quit                 *
****************************
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

  The returning value is 88


****************************
*        MENU - HW #2      *
*  1. getLIWLUDigitCount() *
*  2. Quit                 *
****************************
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

  The returning value is 9


****************************
*        MENU - HW #2      *
*  1. getLIWLUDigitCount() *
*  2. Quit                 *
****************************
Select an option (use integer value only): 2

  Having Fun ...
 */

/** Logic Code Output Issues
  1. The second for loop on line 95 was to prevent reference error
     that cannot find the LIWIDigitCount variable.
  */