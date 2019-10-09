/**
 * Program Name: fractionYingL.h
 * Discussion:   specification file
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/15
 */

#ifndef FRACTIONYINGL_H
#define FRACTIONYINGL_H

class FractionYingL
{
	//private is not easy to access
	//public is protected
public:
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

	void displaySum(FractionYingL lFr, FractionYingL rFr)
	{
		cout << "\nnum: "
			<< lFr.num * rFr.denom + lFr.denom * rFr.num
			<< "\ndenom: " << lFr.denom * rFr.denom << endl;
	}
	
private:
	//function members, member functions
	int num;   //Negativity will be applied to the numerator
	           //That means num can be of any integer

	int denom; //Must be positive integer; cannot be 0
	           //num and denom must be in final simplified form

};

#endif
