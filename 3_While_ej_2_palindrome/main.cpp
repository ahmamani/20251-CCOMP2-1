#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite por teclado una cadena
* incluyendo espacios en blanco e indique si dicha cadena
* representa un palindrome
**/
int main()
{
    string cadena;
    cout << "Ingrese una cadena: " << endl;
    getline(cin, cadena);

    int ini = 0;
    int fin = cadena.length()-1;
    int len = cadena.length();

    bool flag = true;
    while(ini < len/2 && flag) {
        if(cadena.at(ini) != cadena.at(fin)){
            flag = false;
        }
        ini = ini + 1;
        fin = fin - 1;
    }
    if(flag) {
        cout << "Es palindrome!!" << endl;
    } else {
        cout << "NO ES palindrome!!" << endl;
    }

    return 0;
}
