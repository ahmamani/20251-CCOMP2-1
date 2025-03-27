#include <iostream>

using namespace std;

/**
* Implemente un programa que reciba un caracter e
* indique si dicho caracter representa una letra.
*/
int main()
{
    char car;
    cout << "Ingrese un caracter por favor: ";
    cin >> car;

    int val = static_cast<int>(car);
    if( (val >= 65 && val <=90) || (val >= 97 && val <= 122) ) {
        cout << "ES LETRA" << endl;
    } else {
        cout << "NO ES LETRA" << endl;
    }

    return 0;
}
