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

Fraction::Fraction(int n, int d) : num(n / gcd(n, d)), denom(d / gcd(n, d)) {}

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
	return denom;
}

int Fraction::gcd(int n, int d)
{
	//additional code

	return 1;
}