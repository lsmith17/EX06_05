#include<iostream>
using namespace std;

class Complex{
private:
	double A;
	double B;

public:
	Complex();
	Complex(double A);
	Complex(double A, double B);
	void SetA(double);
	void SetB(double);
	double GetA() const;
	double GetB() const;
	Complex add(Complex v);
	Complex subtract(Complex v);
	Complex multiply(Complex v);
	Complex divide(Complex v);
	
	void print();
};