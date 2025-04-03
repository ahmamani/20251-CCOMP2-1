#include <iostream>

using namespace std;

/**
* Implemente un programa que pida por teclado una cadena
* (incluye espacios en blanco) y una palabra e imprima
* en numero de veces que dicha palabra se encuentra en
* la cadena.
*   "ciencia de la computacion de la ucsp"
*   "de"
*   -> de se repite 2 veces
**/
int main()
{
    string cad;
    string palabra;
    cout << "Ingrese una frase: ";
    getline(cin, cad);
    cout << "Ingrese una palabra a buscar: ";
    cin >> palabra;

    int lencad = cad.length();
    int idxcad = 0;
    int lenpal = palabra.length();
    int idxpal = 0;
    int counter = 0;
    bool flag = true;

    while(idxcad < lencad) {
        if(cad.at(idxcad) == palabra.at(idxpal)) {
            while(idxpal < lenpal) {
                if(cad.at(idxcad) != palabra.at(idxpal)) {
                    flag = false;
                    break;
                }
                idxpal++;
                idxcad++;
            }
            if(flag) {
                counter++;
            }
            idxpal = 0;
            flag = true;
        }
        idxcad = idxcad + 1;
    }
    cout << counter << endl;
    return 0;
}
