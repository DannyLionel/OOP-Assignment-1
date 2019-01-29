//declaration of Class Complex
//prevent multiple inclusion of header file
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex //class Complex definition
{
	friend ostream &operator<<(ostream &, const Complex &);
	friend istream &operator>>(istream &, Complex &);
public:
	Complex(double real = 0.0, double imaginary = 0.0); //constructor
	double getReal(); //return the real part
	double getImaginary(); //return the imaginary part
	void setReal(double); // set the real part
	void setImaginary(double); // set the imaginary part
	Complex operator+(const Complex &) const; //addition
	Complex operator-(const Complex &) const;//subtraction
	Complex operator*(const Complex &) const;//multiplication
	bool operator==(const Complex &) const;//equality
	bool operator>(const Complex &) const;//greater than
	Complex & operator+=(double real);//addition assignment
	Complex & operator++(); //prefix increment operator
	const Complex operator--(int);//postfix decrement operator
	void print() const;
private:
	double real;
	double imaginary;
};
#endif
