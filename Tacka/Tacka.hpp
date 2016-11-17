#ifndef Tacka_HPP_INCLUDED
#define Tacka_HPP_INCLUDED

#include <iostream>
using namespace std;

class Tacka{
    private:
        int x;
        int y;
    public:
        Tacka();
        Tacka(int, int);
        Tacka(const Tacka &);

        Tacka& operator=(const Tacka&);
        Tacka& operator+=(const Tacka&);
        Tacka& operator-=(const Tacka&);
        Tacka& operator*=(const Tacka&);
        Tacka& operator/=(const Tacka&);

        const Tacka& operator++();
        const Tacka operator++(int);

        friend Tacka operator+(const Tacka&, const Tacka&);
        friend Tacka operator-(const Tacka&, const Tacka&);
        friend Tacka operator*(const Tacka&, const Tacka&);
        friend Tacka operator/(const Tacka&, const Tacka&);
        friend bool operator==(const Tacka&, const Tacka&);
        friend bool operator!=(const Tacka&, const Tacka&);
        friend ostream& operator<<(ostream&, const Tacka&);
        friend istream& operator>>(istream&, Tacka&);

};

#endif // Tacka_HPP_INCLUDED
