#include "Digitron.hpp"

Digitron::Digitron(){
    value = 1;
}

Digitron::Digitron(double d){
    value = d;
}

Digitron::Digitron(const Digitron& d){
    value = d.value;
}

void Digitron::setValue(double d){
    value = d;
}

double Digitron::getValue() const{
    return value;
}

Digitron& Digitron::operator=(const Digitron& d){
    value = d.value;
    return *this;
}

Digitron& Digitron::operator+=(const Digitron& d){
    value += d.value;
    return *this;
}

Digitron& Digitron::operator-=(const Digitron& d){
    value -= d.value;
    return *this;
}

Digitron& Digitron::operator*=(const Digitron& d){
    value *= d.value;
    return *this;
}

Digitron& Digitron::operator/=(const Digitron& d){
    value /= d.value;
    return *this;
}
// prekplapanje operatora prefiskni ++
const Digitron& Digitron::operator++(){
    value++;
    return *this;
}
// prekplapanje operatora postfiksni ++
const Digitron Digitron::operator++(int i){
    Digitron d(value);
    value++;
    return d;
}
// prekplapanje operatora prefiksni --
const Digitron& Digitron::operator--(){
    value--;
    return *this;
}
// prekplapanje operatora postfiksni --
const Digitron Digitron::operator--(int i){
    Digitron d(value);
    value--;
    return d;
}

Digitron operator+(const Digitron& d1,const Digitron& d2){
    Digitron d(d1.value + d2.value);
    return d;
}

Digitron operator-(const Digitron& d1, const Digitron& d2){
    Digitron d(d1.value - d2.value);
    return d;
}

Digitron operator*(const Digitron& d1, const Digitron& d2){
    Digitron d(d1.value * d2.value);
    return d;
}

Digitron operator/(const Digitron& d1, const Digitron& d2){
    Digitron d(d1.value / d2.value);
    return d;
}

bool operator==(const Digitron& d1, const Digitron& d2){
    return ((d1.value == d2.value) ? true : false);
}

bool operator!=(const Digitron& d1, const Digitron& d2){
    return ((d1.value == d2.value) ? false : true);
}

ostream& operator<<(ostream& out, const Digitron& d){
    out << d.value;
    return out;
}

istream& operator>>(istream& in, Digitron& d){
    in >> d.value;
    return in;
}

