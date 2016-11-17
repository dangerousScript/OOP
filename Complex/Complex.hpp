#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED

#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;
public:
	// konstruktori
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	// get metode
	double getReal() const;
	double getImag() const;

	// set metode
	void setReal(double);
	void setImag(double);

	// preklapanje operatora
	Complex& operator=(const Complex&);
	Complex& operator+=(const Complex&);
	Complex& operator-=(const Complex&);
	Complex& operator*=(const Complex&);
	Complex& operator/=(const Complex&);

	const Complex& operator++();
	const Complex operator++(int);

	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator-(const Complex&, const Complex&);
	friend Complex operator*(const Complex&, const Complex&);
	friend Complex operator/(const Complex&, const Complex&);

	friend bool operator==(const Complex&, const Complex&);
	friend bool operator!=(const Complex&, const Complex&);

	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
};

#endif // COMPLEX_HPP_INCLUDED
