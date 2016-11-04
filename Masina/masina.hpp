// stefan
#ifndef MASINA_HPP_INCLUDED
#define MASINA_HPP_INCLUDED

#include <iostream>
using namespace std;

#define VALUE_MAX 80
#define VALUE_MIN 0
#define VALUE_KORAK 20

enum stanje {
    sA = 1,
    sB = 2,
    sC = 3,
    sD = 4
};

class Masina {
private:
    stanje state;
    int value;
public:
    Masina();

    bool metodaX();
    bool metodaY();
    bool metodaZ();
    bool metodaW();

    bool povecaj();
    bool smanji();

    void print() const;
    int meni() const;
};



#endif // MASINA_HPP_INCLUDED
