/**
 * Program Name: fractionUtility.cpp
 * Discussion:   Implementation File
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/08
 */

#include <iostream>
#include "fractionUtility.h"
using namespace std;

void runMenuHw3A()
{
	int option;
	Fraction* lFrPtr(nullptr);
	Fraction* rFrPtr(nullptr);
	Fraction* resultPtr(nullptr);

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
			init(&lFrPtr, &rFrPtr);
			
			break;
		case 2:
			cout << "\nQuitting!" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!" << endl;
		}
	} while (option != 2);
}

void init(Fraction** lPtrPtr, Fraction** rPtrPtr)
{
	Fraction* frPtr(nullptr);
	int n;
	int d;

	if (*lPtrPtr == nullptr && *rPtrPtr == nullptr)
	{
		cout << "\nEnter an int for num: ";
		cin >> n;

		cout << "\nEnter a non-zero int for denom: ";
		cin >> d;

		frPtr = new Fraction(n, d);
		*lPtrPtr = frPtr;

		cout << "\nEnter an int for num: ";
		cin >> n;

		cout << "\nEnter a non-zero int for denom: ";
		cin >> d;

		frPtr = new Fraction(n, d);
		*rPtrPtr = frPtr;
	}
	else
	{
		cout << "\nEnter an int for num: ";
		cin >> n;

		cout << "\nEnter a non-zero int for denom: ";
		cin >> d;
		(*(*lPtrPtr)).setNum(n, gcdBF(n, d));

		(*lPtrPtr)->setNum(n, gcdBF(n, d));
	}
}

int gcdBF(int arg1, int arg2)
{
	int gcd = 1;

	for (int i = 2; i <= arg1 && i <= arg2; i++)
		if (arg1, )
}

int foo1()
{
	Fraction* frPtr(nullptr);

	frPtr = new Fraction(1, 2);
    //deal with 2 operators - dereference and a period
	cout << (*frPtr).getDenom() << endl; 

	cout << frPtr->getDenom() << endl;

	delete frPtr;
	frPtr = nullptr;
}