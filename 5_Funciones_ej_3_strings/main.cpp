#include <iostream>

using namespace std;
/**
* Ejercicios con cadenas
*/
/*
int obtenerLongitudCadena(string cad) {
    int i;
    for(i = 0; cad.at(i) != '\0'; i++); // ????
    return i;
}*/

// Funcion que reciba una cadena y un caracter
// y retorne el nro de veces que dicha caracter
// se encuentra en dicha cadena
int contarCarEnCad(string cad, char car) {
    int cont = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(cad.at(i) == car) {
            cont++;
        }
    }
    return cont;
}

int main()
{
    string cad = "ciencia";
    cout << contarCarEnCad(cad, 'i') << endl;
    return 0;
}
