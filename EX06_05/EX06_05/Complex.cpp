#ifndef Complex_H
#define Complex_H
#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(){
	A = B = 0;
}
Complex::Complex(double r){
	A = r;
	B = 0;
}
Complex::Complex(double r, double i){
	A = r;
	B = i;
}
Complex Complex::add(Complex c){
	Complex add;
	add.A = A + c.A;
	add.B = B + c.B;
	return add;
}
Complex Complex::subtract(Complex c){
	Complex subtract;
	subtract.A = A - c.A;
	subtract.B = B - c.B;
	return subtract;
}
Complex Complex::multiply(Complex c){
	Complex multiply;
	multiply.A = A*c.A - B*c.B;
	multiply.B = A*c.B + c.A*B;
	return multiply;
}
Complex Complex::divide(Complex c){
	Complex divide;
	divide.A = (A*c.A + B*c.B) / (c.A*c.A + c.B*c.B);
	divide.B = (B*c.A - A*c.B) / (c.A*c.A + c.B*c.B);
	return divide;
}

double Complex::GetA() const{
	return A;
}
double Complex::GetB() const{
	return B;
}
void Complex::SetA(double r){
	A = r;
}
void Complex::SetB(double i){
	B = i;
}
void Complex::print(){
	cout << '(' << A << " + " << B << "i)";
}
#endif