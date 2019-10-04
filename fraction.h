/**
 * Program Name: fraction.h
 * Discussion:   specification file
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/19~26
 */

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
	//private is not easy to access
	//public is protected
public:
	Fraction();
	/*Fraction() : num(0), denom(1)
		         //initializors
		         //initialization list 
	{
		//num = 0;
		//denom = 0;
	}*/
	Fraction(int n, int d)
	{

	}

	//Fraction()
	//{
	//	  num = 0;
	//	  denom = 0;
	//}
	void setNum(int);
	/*void setNum(int n)
	{
		num = n;
	}
	two member functions
	int getNum()
	{
		return num;
	}

	int getDenom()
	{
		return denom;
	}*/
	int getNum(void) const;

	void setDenom(int);
	int getDenom(void) const;

	void displaySum(Fraction lFr, Fraction rFr)
	{
		cout << "\nnum: "
			<< lFr.num * rFr.denom + lFr.denom * rFr.num
			<< "\ndenom: " << lFr.denom * rFr.denom << endl;
	}

	int gcd(int){}
	
private:
	//function members, member functions
	int num;   //Negativity will be applied to the numerator
	           //That means num can be of any integer

	int denom; //Must be positive integer; cannot be 0
	           //num and denom must be in final simplified form

};

#endif
