// Fraction.h

#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int num, int den);
	int GCD(int num, int den);
	friend istream& operator>>(istream& fi, Fraction& f);
	friend ostream& operator<<(ostream& fo, const Fraction& f);
	int compare(const Fraction& f2) const;
	friend bool operator==(const Fraction& f1, const Fraction& f2);
	friend bool operator!=(const Fraction& f1, const Fraction& f2);
	friend bool operator<(const Fraction& f1, const Fraction& f2);
	friend bool operator>(const Fraction& f1, const Fraction& f2);
};
