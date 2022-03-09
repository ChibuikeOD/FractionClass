// member function definitions for class Fraction

#include "Fraction.h"
#include "math.h"

Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
    reduce();
}

Fraction Fraction::operator+=(const Fraction& a) //overloading the '+' operator
{
    int new_numerator = numerator * a.denominator + denominator * a.numerator;
    int new_denominator = denominator * a.denominator;
    numerator = new_numerator;
    denominator = new_denominator;
    reduce();
    return *this;
}

Fraction Fraction::operator-=(const Fraction& a) //overloading the '-' operator
{
    int new_numerator = numerator * a.denominator - denominator * a.numerator;
    int new_denominator = denominator * a.denominator;
    numerator = new_numerator;
    denominator = new_denominator;
    reduce();
    return *this;
}

Fraction Fraction::operator^(const int &a) //overloading the '^' operator
{
    int new_numerator = pow(numerator, a);
    int new_denominator = pow(denominator, a);
    numerator = new_numerator;
    denominator = new_denominator;
    reduce();
    return *this;
}

Fraction Fraction::operator*=(const Fraction& a) // overloading the '*' operator
{
    int new_numerator = numerator * a.numerator;
    int new_denominator = denominator * a.denominator;
    numerator = new_numerator;
    denominator = new_denominator;
    reduce();
    return *this;
}

bool Fraction::operator>(Fraction a) //overloading the '*' operator
{
    bool isGreater = false;
    double compare1 = (double)numerator / (double)denominator;
    double compare2 = (double)a.numerator / (double)a.denominator;

    if (compare1 > compare2)
    {
        isGreater = true;
    }
    return isGreater;
}

bool Fraction::operator<(Fraction a) // overloading the '>' operator
{
    bool isLess = false;
    double compare1 = (double)numerator / (double)denominator;
    double compare2 = (double)a.numerator / (double)a.denominator;

    if (compare1 < compare2)
    {
        isLess = true;
    }

    return isLess;
}



void Fraction::printFraction(ostream& out) const
{
    if (numerator == 0)         // print Fraction as zero
        out << numerator;
    else if (denominator == 1)  // print Fraction as integer
        cout << numerator;
    else
        out << numerator << '/' << denominator;
}

void Fraction::reduce(void) // reduces a fraction to its lowest terms
{
    int largest, gcd = 1;  // greatest common divisor;

    largest = (numerator > denominator) ? numerator : denominator;

    for (int loop = 2; loop <= largest; ++loop)
        if (numerator % loop == 0 && denominator % loop == 0)
            gcd = loop;

    numerator /= gcd;
    denominator /= gcd;
}


ostream& operator<<(ostream& out, Fraction& r)
{
    r.printFraction(out);
    return out;
}
