#ifndef ZAGLAVLJE_HPP_INCLUDED
#define ZAGLAVLJE_HPP_INCLUDED

#include <iostream>
using namespace std;

class Digitron{
    private:
        double value;
    public:
        Digitron();
        Digitron(double);
        Digitron(const Digitron &);

        void setValue(double);
        double getValue() const;

        Digitron& operator=(const Digitron&);
        Digitron& operator+=(const Digitron&);
        Digitron& operator-=(const Digitron&);
        Digitron& operator*=(const Digitron&);
        Digitron& operator/=(const Digitron&);

        const Digitron& operator++();
        const Digitron operator++(int);
        const Digitron& operator--();
        const Digitron operator--(int);

        friend Digitron operator+(const Digitron&, const Digitron&);
        friend Digitron operator-(const Digitron&, const Digitron&);
        friend Digitron operator*(const Digitron&, const Digitron&);
        friend Digitron operator/(const Digitron&, const Digitron&);

        friend bool operator==(const Digitron&, const Digitron&);
        friend bool operator!=(const Digitron&, const Digitron&);

        friend ostream& operator<<(ostream&, const Digitron&);
        friend istream& operator>>(istream&, Digitron&);
};

#endif // ZAGLAVLJE_HPP_INCLUDED
