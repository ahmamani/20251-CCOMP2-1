#include <iostream>

using namespace std;

/**
* Implemente un programa que pida por teclado una cadena
* (incluye espacios en blanco) y un caracter e imprima
* en numero de veces que dicho caracter se encuentra en
* la cadena.
**/
int main()
{
    string cadena;
    char car;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese un caracter: ";
    cin>> car;

    int i = 0;
    int len = cadena.length();
    int cont = 0;
    while( i < len ){
        if(car == cadena.at(i)) {
            cont = cont + 1;
        }
        i = i + 1;
    }
    cout << "El caracter " << car << " se repite " << cont << " veces." << endl;

    return 0;
}
