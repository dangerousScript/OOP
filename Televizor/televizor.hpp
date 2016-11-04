// stefan
#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

#include <iostream>
using namespace std;

#define ZVUK_MAX 20
#define ZVUK_MIN 0
#define ZVUK_KORAK 3
#define KANAL_MAX 5
#define KANAL_MIN 1
#define KANAL_KORAK 1


enum Stanje_televizora {
    UKLJUCEN,
    ISKLJUCEN,
    POKVAREN
};

class Televizor {
private:
    Stanje_televizora stanje;
    int zvuk;
    int kanal;

public:
    Televizor();
    Televizor(const Televizor &);

    bool ukljuci();
    bool iskljuci();
    bool pokvari();
    bool popravi();
    bool pojacajZvuk();
    bool smanjiZvuk();
    bool sledeciKanal();
    bool prethodniKanal();

    void setKanal();
    void setZvuk();
    string getStanje() const;
    int getZvuk() const;
    int getKanal() const;
    void ispisStanje();
    int meni();
};


#endif // TELEVIZOR_HPP_INCLUDED
