#include "Vreme.hpp"

// prazan konstruktor
Vreme::Vreme(){
    sekunde = 0;
}

// konstruktor sa parametirma: sekunde
Vreme::Vreme(int s){
    sekunde = s;
}

// konstruktor sa parametrima: sekunde, minuti
Vreme::Vreme(int s, int m){
    sekunde = s + 60 * m;
}

// konstruktor sa parametrima: sekunde, minuti, Vremei
Vreme::Vreme(int s, int m, int h){
    sekunde = s + 60 * m + 3600 * h;
}

// konstruktor kopije
Vreme::Vreme(const Vreme& v){
    sekunde = v.sekunde;
}

Vreme& Vreme::operator=(const Vreme &v){
    sekunde = v.sekunde;
    return *this;
}

Vreme& Vreme::operator+=(const Vreme &v){
    sekunde += v.sekunde;
    return *this;
}

Vreme& Vreme::operator-=(const Vreme &v){
    sekunde -= v.sekunde;
    return *this;
}

Vreme operator+(const Vreme& v1, const Vreme& v2){ //koristimo to sto smo vec preklopili +=
    Vreme v(v1);
    v += v2;
    return v;
}

Vreme operator-(const Vreme& v1, const Vreme& v2){ //koristimo to sto smo vec preklopili -=
    Vreme v(v1);
    v -= v2;
    return v;
}

const Vreme& Vreme::operator++(){
    ++sekunde; //uvecava za sekundu
    return *this;
}

const Vreme Vreme::operator++(int){
    Vreme v(sekunde);
    ++sekunde; //uvecava za sekundu
    return v;
}

const Vreme& Vreme::operator--(){
    --sekunde; //umanjuje za sekundu
    return *this;
}

const Vreme Vreme::operator--(int){
    Vreme v(sekunde);
    --sekunde; //umanjuje za sekundu
    return v;
}

bool operator==(const Vreme& v1, const Vreme& v2){
    return v1.sekunde == v2.sekunde;
}

bool operator!=(const Vreme& v1, const Vreme& v2){  //koristimo to sto smo vec preklopili ==
    return !(v1 == v2);
}

bool operator<(const Vreme& v1, const Vreme& v2){
    return v1.sekunde < v2.sekunde;
}

bool operator<=(const Vreme& v1, const Vreme& v2){
    return v1.sekunde <= v2.sekunde;
}

bool operator>(const Vreme& v1, const Vreme& v2){
    return v1.sekunde > v2.sekunde;
}

bool operator>=(const Vreme& v1, const Vreme& v2){
    return v1.sekunde >= v2.sekunde;
}

ostream& operator<<(ostream& os, const Vreme& v){

    int h = 0, m = 0, s = 0;

    os << "Proteklo vreme: ";

    if(v.sekunde != 0){ //ako je jednak 0 onda ne treba menjati
        h = abs((v.sekunde / 3600));
        m = abs((v.sekunde % 3600) / 60);
        s = abs((v.sekunde % 3600) % 60);

        if(v.sekunde < 0)
            os << " - ";

        if(h != 0)
            os << h << "h : ";

        if(m != 0)
            os << m << "m : ";
    }

    os << s << "s" << endl;

    return os;
}

istream& operator>>(istream& is, Vreme& v){
    is >> v.sekunde;
    return is;
}
