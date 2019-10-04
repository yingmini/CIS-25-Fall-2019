/**
 * Program Name: cis25Fall20190926Driver.cpp
 * Discussion:   Driver
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/26
 */

#include <iostream>
#include "fraction.h"
using namespace std;

int gcdBF(int arg1, int arg2);
int gcdRecur(int arg1, int arg2);

//FractionYingL add(FractionYingL, FractionYingL);
void displaySum(FractionYingL, FractionYingL);
void displaySum2(FractionYingL, FractionYingL);

int main()
{
	FractionYingL fr1;

	//fr1.num = 5;
	int setNum(5);
	//fr1.denom = 0;

	cout << fr1.getNum() << endl;

	fr1.setDenom(20);

	cout << fr1.getDenom() << endl;

	return 0;
}

void displaySum2(FractionYingL lFr, FractionYingL rFr)
{
	int a = lFr.getNum();
	int b = lFr.getDenom();
	int c = rFr.getNum();
	int d = rFr.getDenom();

	cout << "\n num : "
		<< a * d + b * c
		<< "\n denom : "
		<< b * d << endl;
}

void displaySum(FractionYingL lFr, FractionYingL rFr)
{
	cout << "\n num : "
		<< lFr.getNum() * rFr.getDenom() +
		lFr.getNum() * rFr.getDenom()
		<< "\n denom : "
		<< lFr.getDenom() * rFr.getDenom() << endl;
}

/*FractionYingL add(FractionYingL lFr, FractionYingL rFr)
{

}*/

int gcdBF(int arg1, int arg2)
{

}

int gcdRecur(int arg1, int arg2)
{

}
