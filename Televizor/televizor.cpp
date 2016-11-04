// stefan
#include "televizor.hpp"

Televizor::Televizor() {
    stanje = ISKLJUCEN;
    zvuk = ZVUK_MIN;
    kanal = KANAL_MIN;
}

Televizor::Televizor(const Televizor &tk) {
    stanje = tk.stanje;
    zvuk = tk.zvuk;
    kanal = tk.kanal;
}

bool Televizor::ukljuci() {
    bool ok;
    if(stanje == ISKLJUCEN) {
        stanje = UKLJUCEN;
        ok = true;
    }
    else{
        ok = false;
    }
    return ok;
}

bool Televizor::iskljuci() {
    bool ok;
    if(stanje == UKLJUCEN) {
        stanje = ISKLJUCEN;
        zvuk = ZVUK_MIN;
        kanal = KANAL_MIN;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Televizor::pokvari() {
    bool ok;
    if(stanje == UKLJUCEN || stanje == ISKLJUCEN) {
        stanje = POKVAREN;
        zvuk = ZVUK_MIN;
        kanal = KANAL_MIN;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Televizor::popravi() {
    bool ok;
    if(stanje == POKVAREN) {
        stanje = ISKLJUCEN;
        zvuk = ZVUK_MIN;
        kanal = KANAL_MIN;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Televizor::pojacajZvuk() {
    bool ok;
    if(stanje == UKLJUCEN && zvuk+ZVUK_KORAK <= ZVUK_MAX){
        zvuk += ZVUK_KORAK;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Televizor::smanjiZvuk() {
    bool ok;
    if(stanje == UKLJUCEN && zvuk-ZVUK_KORAK >= ZVUK_MIN) {
        zvuk -= ZVUK_KORAK;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

bool Televizor::sledeciKanal() {
    bool ok;
    if(stanje == UKLJUCEN && kanal+KANAL_KORAK <= KANAL_MAX){
        kanal += KANAL_KORAK;
        ok = true;
    }
    else {
        kanal = KANAL_MIN;
        ok = false;
    }
    return ok;
}

bool Televizor::prethodniKanal() {
    bool ok;
    if(stanje == UKLJUCEN && kanal-KANAL_KORAK >= KANAL_MIN){
        kanal -= KANAL_KORAK;
        ok = true;
    }
    else {
        ok = false;
    }
    return ok;
}

string Televizor::getStanje() const {
    switch (stanje) {
    case UKLJUCEN:
        return "UKLJUCEN";
        break;
    case ISKLJUCEN:
        return "ISKLJUCEN";
        break;
    case POKVAREN:
        return "POKVAREN";
        break;
    default:
        return "/";
    }
}


void Televizor::ispisStanje() {
    cout << "Stanje: " << getStanje() << endl;
    cout << "Zvuk: " << getZvuk() << endl;
    cout << "Kanal: " << getKanal() << endl;
}
int Televizor::getZvuk() const {
    return zvuk;
}

int Televizor::getKanal() const {
    return kanal;
}

int Televizor::meni() {
    int opcija;
    cout << "+----------------------+" << endl;
    cout << "| 1.  Ukljuci          |" << endl;
    cout << "| 2.  Iskljuci         |" << endl;
    cout << "| 3.  Pokvari          |" << endl;
    cout << "| 4.  Popravi          |" << endl;
    cout << "| 5.  Pojacaj zvuk     |" << endl;
    cout << "| 6.  Smanji zvuk      |" << endl;
    cout << "| 7.  Sledeci kanal    |" << endl;
    cout << "| 8.  Prethodni kanal  |" << endl;
    cout << "| 9.  Izaberi kanal    |" << endl;
    cout << "| 10. Izaberi zvuk     |" << endl;
    cout << "| 11. Prikazi stanje   |" << endl;
    cout << "| 12. Izlaz            |" << endl;
    cout << "+----------------------+" << endl;
    cout << "Opcija -> ";
    cin >> opcija;

    return opcija;
}

void Televizor::setZvuk() {
    int nZvuk;
    if(stanje == UKLJUCEN) {
        do {
            cout << "Unesi zvuk: ";
            cin >> nZvuk;
        } while(nZvuk < ZVUK_MIN || nZvuk > ZVUK_MAX);
    } else if(stanje != UKLJUCEN){
        cout << "Ukljuci tv prvo!" << endl;
    }
    zvuk = nZvuk;
}

void Televizor::setKanal() {
    int nKanal;
    if(stanje == UKLJUCEN) {
        do {
            cout << "Unesi kanal: ";
            cin >> nKanal;
        } while(nKanal < KANAL_MIN || nKanal > KANAL_MAX);
    } else if (stanje != UKLJUCEN) {
        cout << "Ukljuci tv!" << endl;
    }
    kanal = nKanal;
}
