/**
 * Program Name: cis25Fall20191001Driver.cpp
 * Discussion:   Fraction Class
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/01
 */

#include <iostream>
#include "fractionYingL.h"
using namespace std;

typedef int* Type;

void runMenuHw3(void);
void init1(void);
void init1(Type ptr);
void init2(int** ptrPtr);

void init_A(Type& ptr);
void init_B(Type* putr);

int main()
{
	runMenuHw3();

	return 0;
}

void init1()
{

}

void init1(int* ptr)
{
	//is it possible?

	ptr = new int[10000000];
	cout << "\nEnter an int: ";
	cin >> *ptr;

	if (ptr)
	{
		delete ptr;
		ptr = nullptr;
	}
}

void init2(int** ptrPtr)
{
	if (*(ptrPtr) == nullptr)
	{
		*ptrPtr = new int;
	}

	cout << "\nEnter an int: ";
	cin >> **ptrPtr;
}

void runMenuHw3()
{
	int option;
	int* iPtr(nullptr);

	do
	{
		cout << "\n MENU HW #3"
			<< "\n1. Initializing"
			<< "\n2. Quit" << endl;
		cout << "Enter the option: ";
		cin >> option;

		switch (option)
		{
		case 1:
			//Initializing/Updating
            //init1(iPtr);
			init2(&iPtr);
			//iPtr = new int;
			//cout << "\nEnter an int: ";
			//cin >> *iPtr;

			cout << "\nValue stored at "
				<< iPtr << " : " << *iPtr << endl;

			/*if (iPtr)
			{
				delete iPtr;
				iPtr = nullptr;
			}*/

			break;
		case 2:
			cout << "\nQuitting!" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!" << endl;
		}
	} while (option != 2);
}