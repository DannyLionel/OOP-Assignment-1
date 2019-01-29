#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double r, double i) : real(r), imaginary(i)
{

}
void Complex::print() const
{
	cout << "(" << real << "," << imaginary << ")" << endl;
}
double Complex::getReal()
{
	return real;
}
double Complex::getImaginary()
{
	return imaginary;
}
Complex Complex::operator+(const Complex &operand1) const
{
	return Complex(real + operand1.real, imaginary + operand1.imaginary);
	//end function operator+
}
Complex Complex::operator-(const Complex &operand1) const
{
	return Complex(real - operand1.real, imaginary - operand1.imaginary);
	//end function operator-
}
Complex Complex::operator*(const Complex &operand1) const
{
	return Complex(real * operand1.real - imaginary * operand1.imaginary, real * operand1.imaginary + imaginary * operand1.real);
	//end function operator*
}
Complex& Complex:: operator++()
{
	real++;
	imaginary++;
	return*this;
	//end function operator++
}
const Complex Complex::operator--(int)
{
	Complex old(*this);
	--real;
	--imaginary;
	return old;
	//end funtion operator--(int)
}
bool Complex::operator==(const Complex &operand1) const
{
	if ((real == operand1.real) && (imaginary == operand1.imaginary))
	{
		return true;
	}
	else
	{
		return false;
	}
	//end function operator==
}
bool Complex::operator>(const Complex &operand1) const
{
	if ((real > operand1.real) && (imaginary > operand1.imaginary))
	{
		return true;
	}
	else {
		return false;
	}
	//end function operator>
}
Complex & Complex::operator+=(double value)
{
	real += value;

	return *this;
	//end function operatot+=
}

ostream &operator<<(ostream &out, const Complex &myComplex)
{
	return out << "(" << myComplex.real << "," << myComplex.imaginary << ")";
	//return funtion operator<<
}
istream &operator>>(istream &in, Complex &myComplex)
{
	in >> myComplex.real >> myComplex.imaginary;
	return in;
	//return function operator>>
}