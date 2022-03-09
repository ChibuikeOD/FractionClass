


#include <iostream> 
#include <cstdlib>
#include "math.h"

#ifndef FRACTION
#define FRACTION
using namespace std;

class Fraction {
public:
	Fraction(int n = 0, int d = 1); // constructor
	Fraction operator+=(const Fraction&); //overloading addition operator "+=" 
	Fraction operator-=(const Fraction& ); //overloading suntraction operator '-='
	Fraction operator^(const int&);
	Fraction operator*=(const Fraction& );
	bool operator>(Fraction );
	bool operator<(Fraction a);
	/* fill in here the member overloading operators "-=,*=,^,>,<" */

	void printFraction(ostream& out) const; // access function to display Fraction number 
											   // in Fraction format.

private:
	int numerator;
	int denominator;
	void reduce(void); // a private function to simplify the Fraction so that the
							// greatest common divisor of numberato and denominator is 1 
};

/* overload ostream operator "<<" */

ostream& operator<<(ostream& out, Fraction& r);  

#endif