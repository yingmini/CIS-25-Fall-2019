/**
 * Program Name: fraction.cpp
 * Discussion:   Implementation File
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/19~26
 */

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction() : num(0), denom(1) {}

Fraction::Fraction(int n, int d) : 
	num(n / gcdBF(n, d)), denom(d / gcdBF(n, d)) {}

Fraction::Fraction(const Fraction& fr) 
//it doesn't matter if it's private, 
//public when it's in the class
{
	cout << "\nCalling Fraction(const Fraction&)" << endl;
	num = fr.num;
	denom = fr.denom;

	//fr.num = 0;
	//fr.denom = 0;
}

/*Fraction::Fraction(Fraction& fr)
{
	num = fr.num;
	denom = fr.denom;
}*/

void Fraction::setNum(int n) //setNum is a member 
						     //function of class fraction
{
	num = n;
}

int Fraction::getNum() const
{
	//num = 0;

	return num;
}

void Fraction::setDenom(int d)
{
	denom = d;
}

int Fraction::getDenom() const
{
	cout << 5 * 5 << endl;
	cout << denom << endl;

	//denom = 1;
	//num = 0;

	return denom;
}

void Fraction::print() const
{
	cout << "\n  num: " << num
		<< "\n  denom: " << denom << endl;
}

Fraction Fraction::add(const Fraction& fr)
{
	int n;
	int d;

	n = getNum() * fr.getDenom() + getDenom() * fr.getNum();
	d = getDenom() * fr.getDenom();

	//to-do to return a function

	return Fraction(n, d); //anonymous object
}

int Fraction::gcdBF(int arg1, int arg2)
{
	//additional code

	return 1;
}