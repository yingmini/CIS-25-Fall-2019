/**
 * Program Name: fractionYingL.h
 * Discussion:   specification file
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/09/19
 */

#ifndef FRACTION_H
#define FRACTION_H

class FractionYingL
{
	//private is not easy to access
	//public is protected
public:
	void setNum(int n)
	{
		num = n;
	}
	/*two member functions
	int getNum()
	{
		return num;
	}

	int getDenom()
	{
		return denom;
	}*/
	
private:
	//function members, member functions
	int num;
	int denom; //cannot be 0
};

#endif
