// stefan
#ifndef XNAY_HPP_INCLUDED
#define XNAY_HPP_INCLUDED

#include <iostream>
#include <math.h>
using namespace std;

class XnaY {
private:
    int x;
    int y;

public:
    XnaY();
    void setX(int);
    void setY(int);
    void setX_Y(int, int);
    void showX() const;
    void showY() const;
    void showXnaY() const;
    int meni() const;
    double getXnaY() const;
};


#endif // XNAY_HPP_INCLUDED
