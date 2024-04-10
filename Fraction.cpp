// Fraction.cpp

#include "Fraction.h"
#include <iostream>
#include <fstream>

using namespace std;

Fraction::Fraction(int num, int den)
{
	if (den == 0)
	{
		this->numerator = 0;
		this->denominator = 1;
	}
	else
	{
		this->numerator = num;
		this->denominator = den;
	}
}
istream& operator>>(istream& fi, Fraction& f)
{
	fi >> f.numerator >> f.denominator;
	return fi;
}
ostream& operator<<(ostream& fo, const Fraction& f)
{
	fo << f.numerator << "/" << f.denominator;
	return fo;
}
int Fraction::GCD(int num, int den)
{
	if (den == 0) return num;
	return GCD(den, num % den);
}
int Fraction::compare(const Fraction& f2) const
{
	return this->numerator * f2.denominator - this->denominator * f2.numerator;
}
bool operator==(const Fraction& f1, const Fraction& f2)
{
	return f1.compare(f2) == 0;
}
bool operator!=(const Fraction& f1, const Fraction& f2)
{
	return f1.compare(f2) != 0;
}
bool operator>(const Fraction& f1, const Fraction& f2)
{
	return f1.compare(f2) > 0;
}
bool operator<(const Fraction& f1, const Fraction& f2)
{
	return f1.compare(f2) < 0;
}
