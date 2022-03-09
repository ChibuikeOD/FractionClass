/*
This is a program that creates a Fraction class and overloads operations to be used with it

*/

#include <iostream>
#include "Fraction.h"
#include "math.h"
#include <cstdlib>

using namespace std;
int main()
{
	Fraction c(7, 3), d(3, 9), x;


	cout << c;
	cout << " + ";
	cout << d;
	cout << " = ";
	c += d;
	cout << c;

	cout << '\n';
	cout << c;
	cout << " - ";
	cout << d;
	cout << " = ";
	c -= d;
	cout << c;

	Fraction e(2, 3);

	cout << '\n';
	cout << c;
	cout << " * ";
	cout << e;
	cout << " = ";
	c *= e;
	cout << c;

	cout << '\n';
	cout << c;
	cout << " to the power of 3 gives ";
	x = c ^ 3;
	cout << x;

	cout << '\n';
	 // c.printFraction();
	cout << c;
	cout << " is:\n";

	cout << ((c > d) ? "  > " : "  <= ");
	cout << d;
	cout << " according to the overloaded > operator\n";

	cout << ((c < d) ? "  < " : "  >= ");
	cout << d;
	cout << " according to the overloaded < operator\n";
	
	return 0;
}

/*
7/3 + 1/3 = 8/3
8/3 - 1/3 = 7/3
7/3 * 2/3 = 14/9
14/9 to the power of 3 gives 2744/729
2744/729 is:
  > 1/3 according to the overloaded > operator
  >= 1/3 according to the overloaded < operator



*/

