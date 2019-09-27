/**
 * Program Name: fractionYingL.h
 * Discussion:   C++ Initialization
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/17
 */

#include <iostream>
using namespace std;

#ifndef CIS25FALL2019_H
#define CIS25FALL2019_H

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

#endif
