/**
 * Program Name: cis25Fall20191003Driver.cpp
 * Discussion:   Fraction Class
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/03
 */

#include <iostream>
#include "fraction.h"
using namespace std;

typedef int* Type;

void gcdBF(void);
void gcdRecur(void);

void runMenuHw3(void);
void init1(void);
void init1(Type ptr);
void init2(int** ptrPtr);

void init_A(Type& ptr);
void init_B(Type* putr);

void displaySum(Fraction, Fraction);

int main()
{
	int usrValue = 0; //declaration --> initialization
	int usrValue1(0);
	int usrValue2{ 0 };

	Fraction fr1; //creation or building an object through Fraction()
	Fraction fr2{ Fraction() }; //specificly built for default constructor
	Fraction fr3{ Fraction(1, 2) };
	Fraction fr4(1, 2);
	//Fraction fr5(2, 4);
	//Fraction fr6(1, -2);


	return 0;
}

void displaySum(Fraction l, Fraction r)
{
	int n;
	int d;

	n = l.getNum() * r.getDenom() + l.getDenom() * r.getNum();
	d = l.getDenom() * r.getDenom();

	cout << "\nRemember to reduce the resulting Fraction!" << endl;
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