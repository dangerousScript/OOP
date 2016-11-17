#include "Tacka.hpp"

int main()
{
    Tacka t1, t2(6, 4), t3(t2);

    cout << "t1" << endl;
    cout << t1;

    cout << endl << "t2" << endl;
    cout << t2;

    cout << endl << "t3" << endl;
    cout << t3;

    cout << endl << "t2 + t1" << endl;
    cout << t2 + t1;

    cout << endl << "t2 / t1" << endl;
    cout << t2 / t1;

    cout << endl << "t2 - t1" << endl;
    cout << t2 - t1;

    cout << endl << "t2 * t1" << endl;
    cout << t2 * t1;

    cout << endl << "t1" << endl;
    cout << t1;

    cout << endl << "t2" << endl;
    cout << t2;

    cout << endl << "t2 == t1" << endl;
    cout << ((t2 == t1) ? "true" : "false");

    cout << endl << endl << "t2 == t3" << endl;
    cout << ((t2 == t3) ? "true" : "false");

    cout << endl << endl << "t1" << endl;
    cout << t1;

    cout << endl << "t1++" << endl;
    cout << t1++;

    cout << endl << "t1" << endl;
    cout << t1;

    cout << endl << "++t1" << endl;
    cout << ++t1;

    cout << endl << "t1" << endl;
    cout << t1;

    cout << endl << "Upisite nove koordinate za instancu t1" << endl;
    cout << "cin >> t1" << endl;
    cin >> t1;

    cout << endl << "t1" << endl;
    cout << t1;

    cout << endl;

    return 0;
}
