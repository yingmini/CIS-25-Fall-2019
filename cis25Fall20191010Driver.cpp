/**
 * Program Name: cis25Fall20191010Driver.cpp
 * Discussion:   Fraction Class
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/10
 */

#include <iostream>
#include "fraction.h"
using namespace std;

typedef int* Type;

void gcdBF(void);
void gcdRecur(void);

int main()
{
	//runMenuHw3A();
	Fraction fr1;
	Fraction* frPtr1{ new Fraction() };
	Fraction* frPtr2 = new Fraction(fr1);

	frPtr1->displaySum(fr1, *frPtr1);
	//frPtr1->num = 1;
	//cout << frPtr1->denom << endl;

	frPtr1->add(*frPtr2);

	return 0;
}