/**
 * Program Name: Cis25Fall20190912.cpp
 * Discussion:   C++ Initialization
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/12
 */

#include <iostream>
using namespace std;

//Function Prototypes
void runMenuHw1();
int getSmallestIntegerWithSmallestTODC(int[], int);
int getSmallestTODC(int[], int);
int getTODC(int);
int foo1();
int foo2();

//int swap(int, int);
//int swap(int*, int*);
void swap(int&, int&);

void foo1(int);
void foo1(int&);
void foo2(int&);
void foo3(int&);

int getUniqueCount(int);
int getLargestUniqueDigitCount(int[], int);
int getLargestUniqueIntWithLargestDigitCount(int[], int);

void foo4();

//Application Driver

int main()
{
	int value1 = 5;
	int value2 = 9;

	//foo1(value1);

	foo1(5);
	foo2(value1);
	foo2(value2);

	cout << "\nUnique digit count for value1 (of " << value1 
		<< ") : " << getUniqueCount(value1) << endl;
	
	return 0;
}

//Function Definition

void foo4()
{
	int usrValue = 0;
	int usrValue1{0};
	int usrValue2(0);

	int ary[5];
	int ary0[5] = { 0, 0, 0, 0, 0 }; // local array
	int ary1[5] = { 0 };
	int ary2[5] = { 1, -2 };
	int ary3[5]{ 1, 2 };

	int* iPtr(nullptr);
	int* iPtr1 = new int[5]; //dynamic array, memory heap  
	//new is an operation that handle the request

	//do something with the dynamic array
	//delete iPtr1 //will lead to memory leak
	delete[] iPtr1;
	iPtr1 = nullptr;


	iPtr = new int;
	//do some work
	//time to release the dynamic block pointed to by iPtr
	delete iPtr;
	iPtr = nullptr; // it works in pair, removes the address
}

int getUniqueCount(int arg)
{
	int uniqueCount = 0;
	int digitAry[10] = {0};
	int lsd;

	if (arg < 0)
	{
		arg = -arg;
	}

	do
	{
		lsd = arg % 10;
		digitAry[lsd]++;
		arg /= 10;
	} while (arg);

	for (int i = 0; i < 10; i++)
	{
		if (digitAry[i])
		{
			uniqueCount++;
		}
	}

	return uniqueCount;
}

void foo3(int& ref)
{
	cout << "\nSquare of ref : " << ref * ref << endl;
}

void foo2(int& ref)
{
	//ref = -1000;
	ref *= ref;
}

void foo1(int& arg)
{

}

void foo1(int arg)
{

}

void swap(int& ref1, int& ref2)
{
	int tmp;

	tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

int foo2()
{
	int* iPtr = nullptr;
	int userSize;

	cout << "\nWhat is the size of the array? ";
	cin >> userSize;

	iPtr = new int[userSize];

	return 0;
}

int foo1()
{
	int* iPtr = nullptr;
	int userSize;
	int ary1[3];
	int size1 = 3;

	int ary2[] = { 1, 2, -2 };
	int size2 = 3;

	cout << ary1 << endl;
	cout << iPtr << endl;
	iPtr = ary1;

	cout << iPtr << endl;
	iPtr = ary1 + 1;
	cout << iPtr << endl;

	cout << ary2[0] << endl << ary2[1] << endl << ary2[2] << endl;
	iPtr = ary2;
	cout << iPtr[0] << endl << iPtr[1] << endl << iPtr[2] << endl;

	ary2[0] = 5 + ary2[1];
	iPtr[2] = ary2[0] + 5 + ary2[1];

	iPtr = new int[userSize];
	for (int i = 0; i < userSize; i++)
	{
		cout << "\nEnter an int: ";
		cin >> iPtr[i];
	}

	for (int i = 0; i < userSize; i++)
	{
		cout << "\nValue of index " << i << " : " << iPtr[i] << endl;
	}

	return 0;
}
/*
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
/*
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

	return 0;
}

void runMenuHw1()
{
	int option;
	int* iPtr = nullptr;
	int usrSize;

	do
	{
		cout << "\n***"
			"\n* Menu HW #1"
			"\n* 1. Calling the function"
			"\n* 2. Quit"
			"\nEnter the option (1 or 2): ";

		cin >> option;

		switch (option)
		{
		case 1:
			cout << "\nSetting up the array";

			cout << "\nWhat is the size of the array? ";
			cin >> usrSize;

			if (iPtr != nullptr)
			{
				delete[] iPtr;
				iPtr = nullptr;
			}

			iPtr = new int[usrSize];
			for (int i = 0; i < usrSize; i++)
			{
				cout << "\nEnter an int: ";
				cin >> iPtr[i];
			}

			cout << "\nCalling the function!\n";
			break;
		case 2:
			cout << "\nHaving fun!\n";
			break;
		default:
			cout << "\nYou are too funny!\n";
		}

	} while (option != 2);
}
	*/

