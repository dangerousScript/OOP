#include "Tacka.hpp"

Tacka::Tacka(){
    x = 1;
    y = 1;
}

Tacka::Tacka(int xx, int yy){
    x = xx;
    y = yy;
}

Tacka::Tacka(const Tacka &t){
    x = t.x;
    y = t.y;
}


Tacka& Tacka::operator=(const Tacka &t){
    x = t.x;
    y = t.y;
    return *this;
}

Tacka& Tacka::operator+=(const Tacka &t){
    x += t.x;
    y += t.y;
    return *this;
}

Tacka& Tacka::operator-=(const Tacka &t){
    x -= t.x;
    y -= t.y;
    return *this;
}

Tacka& Tacka::operator*=(const Tacka &t){
    x *= t.x;
    y *= t.y;
    return *this;
}

Tacka& Tacka::operator/=(const Tacka &t){
    x /= t.x;
    y /= t.y;
    return *this;
}

const Tacka& Tacka::operator++(){
    ++x;
    ++y;
    return *this;
}

const Tacka Tacka::operator++(int i){
    Tacka t(x, y);
    ++x;
    ++y;
    return t;
}

Tacka operator+(const Tacka &t1, const Tacka &t2){
    Tacka t(t1.x + t2.x, t1.y + t2.y);
    return t;
}

Tacka operator-(const Tacka &t1, const Tacka &t2){
    Tacka t(t1.x - t2.x, t1.y - t2.y);
    return t;
}

Tacka operator*(const Tacka &t1, const Tacka &t2){
    Tacka t(t1.x * t2.x, t1.y * t2.y);
    return t;
}

Tacka operator/(const Tacka &t1, const Tacka &t2){
    Tacka t(t1.x / t2.x, t1.y / t2.y);
    return t;
}

bool operator==(const Tacka &t1, const Tacka &t2){
    return (t1.x == t2.x && t1.y == t2.y) ? true : false;
}

bool operator!=(const Tacka &t1, const Tacka &t2){
    return (t1.x == t2.x && t1.y == t2.y) ? false : true;
}

ostream& operator<<(ostream &out, const Tacka &t){
    out << "X: " << t.x << " Y: " << t.y << endl;
    return out;
}

istream& operator>>(istream &in, Tacka &t){
    in >> t.x >> t.y;
    return in;
}

