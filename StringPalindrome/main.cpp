#include <iostream>

using namespace std;

/**
* Implemente un programa que reciba una cadena de 4 caracteres
* (validar si tiene 4 caracteres) e indicar si dicha cadena
* representa un palindrome.
*       oso     es
*       adda    es
*       asdf    no es
*/
int main()
{
    string caracteres;
    cout << "Ingresa una cadena de 4 caracteres: " << endl;
    getline(cin, caracteres);

    if (caracteres.length() == 4)
    {
        cout << "Si es de 4 caracteres"<< endl;
        if (caracteres.at(0) == caracteres.at(3) && caracteres.at(1) == caracteres.at(2))
        {
            cout << "Es palindromo"<< endl;
        }
        else{
            cout << "No es palindromo"<< endl;
        }
    }
    else{
        cout << "No es de 4 caracteres" << endl;
    }
    return 0;
}
