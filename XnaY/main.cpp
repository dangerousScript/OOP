// stefan
#include <iostream>
#include "XnaY.hpp"
using namespace std;

int main()
{
        XnaY obj;

        int option;
        double x,y;
        do {
            option = obj.meni();
            switch(option){
            case 1:
                cout << "Unesi X: ";
                cin >> x;
                obj.setX(x);
                break;
            case 2:
                cout << "Unesi Y: ";
                cin >> y;
                obj.setY(y);
                break;
            case 3:
                cout << "Unesi X: ";
                cin >> x;
                cout << "Unesi Y: ";
                cin >> y;
                obj.setX_Y(x, y);
                break;
            case 4:
                obj.showX();
                break;
            case 5:
                obj.showY();
                break;
            case 6:
                obj.showXnaY();
                cout << "to je = " << obj.getXnaY() << endl;
                break;
            case 7:
                cout << "Izlaz! ..." << endl;
                break;
            default:
                    cout << "Pogresan unos!" << endl;
            }
        } while(option != 7);

        return 0;
}
