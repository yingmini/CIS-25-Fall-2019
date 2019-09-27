/**
 * Program Name: fraction.cpp
 * Discussion:   Implementation File
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/19~26
 */

#include <iostream>
#include "fraction.h"
using namespace std;

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