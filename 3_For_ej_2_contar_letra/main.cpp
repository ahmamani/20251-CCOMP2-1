#include <iostream>

using namespace std;

int main()
{
    string cadena;
    char car;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese un caracter: ";
    cin>> car;
    int cont = 0;
    int len = cadena.length();
    for(int i = 0; i < len; i++) {
        if(car == cadena.at(i)) {
            cont = cont + 1;
        }
    }
    cout << "El caracter " << car << " se repite "
        << cont << " veces." << endl;

    return 0;
}
