// stefan
#include "XnaY.hpp"

XnaY::XnaY(){
    x = 1;
    y = 1;
}

void XnaY::setX(int nx){
    x = nx;
}

void XnaY::setY(int ny){
    y = ny;
}

void XnaY::setX_Y(int dx, int dy){
    x = dx;
    y = dy;
}

void XnaY::showX() const {
    cout << "X --> " << x << endl;
}

void XnaY::showY() const {
    cout << "Y --> " << y << endl;
}

double XnaY::getXnaY() const {
    return pow(x,y);
}

void XnaY::showXnaY() const {
    cout << "X^Y= " << getXnaY() << endl;
}

int XnaY::meni() const {
    int opcija;
    cout << "+------------------+" << endl;
    cout << "| 1. Postavi X     |" << endl;
    cout << "| 2. Postavi Y     |" << endl;
    cout << "| 3. Postavi X i Y |" << endl;
    cout << "| 4. Prikazi X     |" << endl;
    cout << "| 5. Prikazi Y     |" << endl;
    cout << "| 6. X^Y           |" << endl;
    cout << "| 7. Izlaz         |" << endl;
    cout << "+------------------+" << endl;
    cout << "Opcija->";
    cin >> opcija;
    return opcija;
}
