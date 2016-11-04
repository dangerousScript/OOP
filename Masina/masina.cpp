#include "masina.hpp"

Masina::Masina(){
    state = sC;
    value = VALUE_MAX;
}

bool Masina::metodaX() {
    bool ok;
    if(state == sC || state == sB){
        state = sA;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Masina::metodaY()  {
    bool ok;
    if(state == sB || state == sD){
        state = sC;
        value = VALUE_MAX;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Masina::metodaZ() {
    bool ok;
    if(state == sA){
        state = sB;
        value = VALUE_MIN;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Masina::metodaW() {
    bool ok;
    if(state == sA){
        state = sD;
        value = VALUE_MIN;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Masina::povecaj() {
    bool ok;
    if(state == sA && value+VALUE_KORAK<=VALUE_MAX){
        value += VALUE_KORAK;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Masina::smanji() {
    bool ok;
    if(state == sA && value-VALUE_KORAK>=VALUE_MIN){
        value -= VALUE_KORAK;
        ok = true;
    }
    else{
        ok = false;
    }
    return ok;
}

void Masina::print() const {
    cout << "Trenutno stanje:   ";
    switch(state){
        case sA:
            cout << "A" << endl;
            break;
        case sB:
            cout << "B" << endl;
            break;
        case sC:
            cout << "C" << endl;
            break;
        case sD:
            cout << "D" << endl;
            break;
        default:
            cout << "/" << endl;
    }

    cout << "Trenutna vrednost: " << value << endl;
}

int Masina::meni() const {
    int opcija;
    cout << "+--------------------------------+" << endl;
    cout << "|       1. X                     |" << endl;
    cout << "|       2. Y                     |" << endl;
    cout << "|       3. Z                     |" << endl;
    cout << "|       4. W                     |" << endl;
    cout << "|       5. Plus                  |" << endl;
    cout << "|       6. Minus                 |" << endl;
    cout << "|       7. Prikazi status masine |" << endl;
    cout << "|       8. Izlaz                 |" << endl;
    cout << "+--------------------------------+" << endl;
    cout << "Opcija => ";
    cin >> opcija;

    return opcija;
}
