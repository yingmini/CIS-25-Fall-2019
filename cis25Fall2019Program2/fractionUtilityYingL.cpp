/**
 * Program Name: fractionUtilityYingL.cpp
 * Discussion:   Implementation File
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/15
 */

#include <iostream>
#include "fractionUtilityYingL.h"
using namespace std;

void FractionYingL::setNum(int n)
{
	num = n;
}

int FractionYingL::getNum() const
{
	//num = 0;

	return num;
}

void FractionYingL::setDenom(int d)
{
	denom = d;
}

int FractionYingL::getDenom() const
{
	return denom;
}