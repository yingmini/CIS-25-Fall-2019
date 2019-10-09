/**
 * Program Name: fractionUtilityYingL.h
 * Discussion:   specification file
 * Written By:	 Ying Hsuen Lin
 * Date:         2019/10/15
 */

#ifndef FRACTIONUTILITYYINGL_H
#define FRACTIONUTILITYYINGL_H

class FractionUtilityYingL
{
	//private is not easy to access
	//public is protected
public:
	void setNum(int);
	int getNum(void) const;

	void setDenom(int);
	int getDenom(void) const;

	void displaySum(FractionUtilityYingL lFr, FractionUtilityYingL rFr)
	{
		cout << "\nnum: "
			<< lFr.num * rFr.denom + lFr.denom * rFr.num
			<< "\ndenom: " << lFr.denom * rFr.denom << endl;
	}

private:
	int num;
	int denom;

};

#endif