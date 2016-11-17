#include "Complex.hpp"

Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

Complex::Complex(const Complex& rc) {
	real = rc.real;
	imag = rc.imag;
}

double Complex::getReal() const {
	return real;
}

double Complex::getImag() const {
	return imag;
}

void Complex::setReal(double r) {
	real = r;
}

void Complex::setImag(double i) {
	imag = i;
}

Complex& Complex::operator=(const Complex& z) {
	real = z.real;
	imag = z.imag;
	return *this;
}

Complex& Complex::operator+=(const Complex& z) {
	real += z.real;
	imag += z.imag;
	return *this;
}

Complex& Complex::operator-=(const Complex& z) {
	real -= z.real;
	imag -= z.imag;
	return *this;
}

Complex& Complex::operator*=(const Complex& z) {
	double r = real * z.real - imag * z.imag;
	double i = real * z.imag + imag * z.real;
	real = r;
	imag = i;
	return *this;
}

Complex& Complex::operator/=(const Complex& z) {
	double r = real;
	double i = imag;
	double d = z.real * z.real + z.imag * z.imag;
	real = (r * z.real + i * z.imag) / d;
	imag = (i * z.real - r * z.imag) / d;
	return *this;
}

const Complex& Complex::operator++() {
	real++;
	imag++;
	return *this;
}
const Complex Complex::operator++(int i) {
	Complex w(real, imag);
	real++;
	imag++;
	return w;
}

Complex operator+(const Complex& z1, const Complex& z2) {
	Complex w(z1.real + z2.real, z1.imag + z2.imag);
	return w;
}

Complex operator-(const Complex& z1, const Complex& z2) {
	Complex w(z1.real - z2.real, z1.imag - z2.imag);
	return w;
}
Complex operator*(const Complex& z1, const Complex& z2) {
	Complex w(z1.real * z2.real - z1.imag * z2.imag,
		z1.imag * z2.real + z1.real * z2.imag);
	return w;
}

Complex operator/(const Complex& z1, const Complex& z2) {
	double d = z2.real * z2.real + z2.imag * z2.imag;
	Complex w((z1.real * z2.real + z1.imag * z2.imag) / d,
		(z1.imag * z2.real - z1.real * z2.imag) / d);
	return w;
}

bool operator==(const Complex& z1, const Complex& z2) {
	return (z1.real == z2.real) && (z1.imag == z2.imag);
}

bool operator!=(const Complex& z1, const Complex& z2) {
	return (z1.real != z2.real) || (z1.imag != z2.imag);
}

ostream& operator<<(ostream& out, const Complex& z) {
	if (z.imag == 0) {
		out << z.real;
	}

	if (z.real == 0 && z.imag != 0) {
		out << z.imag << "i";
	}

	if (z.real != 0 && z.imag > 0) {
		out << z.real << "+" << z.imag << "i";
	}

	if (z.real != 0 && z.imag < 0) {
		out << z.real << z.imag << "i";
	}

	return out;
}

istream& operator>>(istream& in, Complex& z) {
	in >> z.real >> z.imag;
	return in;
}
