#include "Digitron.hpp"

int main()
{

    double a, b;

    cout << "Broj 1 -> ";
    cin >> a;
    cout << "Broj 2 -> ";
    cin >> b;

    // prazan konstruktor
    Digitron d1;
    // konstruktor sa parametrima
    Digitron d2(a);
    Digitron d3(b);
    // konstruktor kopije
    Digitron d4(d3);

    // poziv preklopljenog operatora ipisa za instance d1, d2, d3 i d4
    cout << "d1= " << d1 << endl;
    cout << "d2= " << d2 << endl;
    cout << "d3= " << d3 << endl;
    cout << "d4= " << d4 << endl << endl;

    // poziv preklopljenog operatora dodele =
    d1 = d2;
    cout << "d1=d2: " << d1 << endl;

    // poziv preklopljenog operatora dodele = i sabiranja +
    d1 = d2 + d3;
    cout << "d1=d2+d3: " << d1 << endl;

    // poziv preklopljenog operatora dodele = i mnozenja *
    d2 = d1 * d3;
    cout << "d2=d1*d3: " << d2 << endl;

    // poziv preklopljenog operatora dodele = i deljenja /
    d1 = d2 / d3;
    cout << "d1=d2/d3: " << d1 << endl;

    // poziv preklopljenog operatora sabiranja i dodele +=
    d3 += d1;
    cout << "d3+=d1: " << d3 << endl;

    // poziv preklopljenog operatora oduzimanja i dodele -=
    d3 -= d1;
    cout << "d3-=d1: " << d3 << endl;

    // poziv preklopljenog postfiksnog operatora ++
    cout << "cout<<d3++: " << d3++ << endl;
    cout << "cout<<d3: " << d3 << endl;

    // poziv preklopljenog prefisknog operatora ++
    cout << "cout<<++d3: " << ++d3 << endl;
    cout << "cout<<d3: " << d3<< endl;

    // poziv preklopljenog postfiksnog operatora --
    cout << "cout<<d3--: " << d3-- << endl;
    cout << "cout<<d3: " << d3 << endl;

    // poziv preklopljenog prefisknog operatora --
    cout << "cout<<--d3: " << --d3 << endl;
    cout << "cout<<d3: " << d3 << endl;

    return 0;
}

