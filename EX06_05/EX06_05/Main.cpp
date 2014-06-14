#include<iostream>
#include "Complex.h"
using namespace std;

int main() {
	cout << "Enter first complex number: ";
	double a1, b1, a2, b2;
	cin >> a1 >> b1;
	cout << "Enter second complex number: ";
	cin >> a2 >> b2;
	Complex a(a1, b1);
	Complex b(a2, b2);
	Complex c(a.add(b));
	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	c.print();
	cout << endl;

	c = a.subtract(b);
	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	c.print();
	cout << endl;

	c = a.multiply(b);
	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	c.print();
	cout << endl;

	c = a.divide(b);
	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	c.print();
	cout << endl;

	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	cout << sqrt(a1*a1 + b1*b1) << endl;

	return 0;

}