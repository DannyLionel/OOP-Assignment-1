#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	//instantiate 5 Complex numbers
	Complex x;
	Complex y;
	Complex z1;
	Complex z2;
	Complex z3;
	Complex z4;
	Complex a(1.49, 7.1);
	Complex b(2.0, 3.6);
	Complex c(4.34, 8.56);
	Complex d(6.6, 7.7);
	Complex e(7.895, 3.9);
	// display object values
	cout << "\n\nA: ";
	a.print();
	cout << "\nB: ";
	b.print();

	cout << "\nC: ";
	c.print();
	cout << "\nD: ";
	d.print();
	cout << "\nE: ";
	e.print();

	//read object and display
	cout << "\nEnter real and imaginary parts for complex number\n";
	cin >> x;
	cout << "\nThe Complex Number is: ";
	cout << x;

	cout << "\nEnter real and imaginary parts for complex number\n";
	cin >> y;
	cout << "\nThe Complex Number is: ";
	cout << y;

	z1 = x + y;
	cout << "\nZ1 = x + y ";
	cout << z1;

	z2 = x - y;
	cout << "\nZ2 = x - y ";
	cout << z2;

	z3 = x * y;
	cout << "\nZ3 = x * y ";
	cout << z3;

	if (y == x)
	{
		cout << "\nThe complex number x and y are equal";
	}
	else
	{
		cout << "\nThe complex number x and y are not equal";
	}

	if (y > x)
	{
		cout << "\nThe complex number y is greater than x";
	}
	else
	{
		cout << "\nThe complex y is not greater than x";
	}

	z4 = x + y;
	cout << "\n" << z4 << endl;
	z4 += 3;
	cout << "\nZ4 += 3 = ";
	cout << z4 << endl;

	cout <<"X:" << ++x << " " <<"Y:"<< y-- << endl;

	system("pause");
	return 0;
}