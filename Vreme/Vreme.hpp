#ifndef ZAGLAVLJE_HPP_INCLUDED
#define ZAGLAVLJE_HPP_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

class Vreme{
    private:
        int sekunde;

    public:
        // prazan konstruktor
        Vreme();
        //konstruktor sa parametirma: sekunde
        Vreme(int);
        //konstruktor sa parametrima: sekunde, minuti
        Vreme(int, int);
        //konstruktor sa parametrima: sekunde, minuti, Vremei
        Vreme(int, int, int);
        // konstruktor kopije
        Vreme(const Vreme&);

        Vreme& operator=(const Vreme&);
        Vreme& operator+=(const Vreme&);
        Vreme& operator-=(const Vreme&);

        friend Vreme operator+(const Vreme&, const Vreme&);
        friend Vreme operator-(const Vreme&, const Vreme&);

        const Vreme& operator++();
        const Vreme operator++(int);
        const Vreme& operator--();
        const Vreme operator--(int);

        friend bool operator==(const Vreme&, const Vreme&);
        friend bool operator!=(const Vreme&, const Vreme&);
        friend bool operator<(const Vreme&, const Vreme&);
        friend bool operator<=(const Vreme&, const Vreme&);
        friend bool operator>(const Vreme&, const Vreme&);
        friend bool operator>=(const Vreme&, const Vreme&);

        friend ostream& operator<<(ostream&, const Vreme&);
        friend istream& operator>>(istream&, Vreme&);

};

#endif // ZAGLAVLJE_HPP_INCLUDED
