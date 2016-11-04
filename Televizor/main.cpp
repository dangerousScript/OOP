#include <iostream>
#include "televizor.hpp"

using namespace std;

int main()
{
    Televizor tv;

    int option;

    do {
        option = tv.meni();
        switch(option){
            case 1:
                if(tv.ukljuci()){
                    cout << "Ukjucio si tv." << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 2:
                if(tv.iskljuci()){
                    cout << "Iskljucio si tv." << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 3:
                if(tv.pokvari()){
                    cout << "Pokvario si tv." << endl;
                }
                else {
                    cout << "Greksa!" << endl;
                }
                break;
            case 4:
                if(tv.popravi()){
                    cout << "Popravio si tv." << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 5:
                if(tv.pojacajZvuk()){
                    cout << "Pojacao si zvuk!" << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 6:
                if(tv.smanjiZvuk()){
                    cout << "Smanjio si zvuk!" << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 7:
                if(tv.sledeciKanal()){
                    cout << "Promenio si na sledeci kanal" << endl;
                }
                else {
                    cout << "Greska!" << endl;
                }
                break;
            case 8:
                if(tv.prethodniKanal()){
                    cout << "Promenio si na prethodni kanal!" << endl;
                }
                else {
                    cout << "Vratio si se na prvi kanal!" << endl;
                }
                break;
            case 9:
                tv.setKanal();
                break;
            case 10:
                tv.setZvuk();
                break;
            case 11:
                tv.ispisStanje();
                break;
            case 12:
                cout << "Izlaz! ..." << endl;
                break;
            default:
                cout << "Pogresan unos!" << endl;
        }
    } while (option != 12);

    Televizor tv2(tv);
    tv2.ispisStanje();

    return 0;
}
