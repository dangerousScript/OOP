// stefan 
#include <iostream>
#include "masina.hpp"

using namespace std;

int main()
{
    Masina m;
    int option;

    do {
        option = m.meni();
        switch(option){
            case 1:
                if(m.metodaX()){
                    cout << "Predjeno u stanje A" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 2:
                if(m.metodaY()){
                    cout << "Predjeno u stanje C" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 3:
                if(m.metodaZ()){
                    cout << "Predjeno u stanje B" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 4:
                if(m.metodaW()){
                    cout << "Predjeno u stanje D" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 5:
                if(m.povecaj()){
                    cout << "Povecao si vrednost!" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 6:
                if(m.smanji()){
                    cout << "Smanjio si vrednost!" << endl;
                } else {
                    cout << "Greska!" << endl;
                }
                break;
            case 7:
                m.print();
                break;
            case 8:
                cout << "Izlaz! ..." << endl;
                break;
            default:
                cout << "Pogresan unos opcije! Pokusaj ponovo." << endl;
        }
    }while(option != 8);


    return 0;
}
