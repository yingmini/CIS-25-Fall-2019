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
	Fraction(int n, int d);
	Fraction(const Fraction& fr);
	//Fraction(Fraction fr); //it won't work when 
	                       //you haven't created
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

	void print(void) const;

	Fraction add(const Fraction& fr);

	int gcdBF(int arg1, int arg2);

	void displaySum(const Fraction& lFr, const Fraction& rFr)
		//send you the reference
	{
		cout << "\nnum: "
			<< lFr.num * rFr.denom + lFr.denom * rFr.num
			<< "\ndenom: " << lFr.denom * rFr.denom << endl;
	}

	int gcd(int){}
	
	void update(int n, int d);

	void foo1()
	{
		Fraction* frPtr1{ new Fraction(1, 2) };

		//as you are inside the class definition,
		//you have more privilleges

		frPtr1->num = 5;
		cout << frPtr1->denom << endl;

		//denom = 1;
	}
private:
	//function members, member functions
	int num;   //Negativity will be applied to the numerator
	           //That means num can be of any integer

	int denom; //Must be positive integer; cannot be 0
	           //num and denom must be in final simplified form

};

#endif
