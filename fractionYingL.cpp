/**
 * Program Name: fractionYingL.cpp
 * Discussion:   Implementation File
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/10
 */

#include <iostream>
#include "fractionYingL.h"
using namespace std;

void FractionYingL::setNum(int n) //setNum is a member 
								  //function of class fraction
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