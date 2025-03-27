#include <iostream>

using namespace std;

/**
* Implemente un program que solicite por teclado un caracter
* e imprima la mayuscula de dicho caracter.
*/
int main()
{
    char letra_1;
    cout << "ingrese su letra: ";
    cin >> letra_1;

    if (letra_1 >= 65 && letra_1 <=90)
        {
            cout << "su letra esta en mayuscula: " << letra_1;
        }
    else if (letra_1 >= 97 && letra_1 <= 122)
    {
        char letra_2 = letra_1-32;
        cout <<" su letra en mayuscula es: " << letra_2;
    }
    else
    {
        cout <<" no es una letra :v " << endl;
    }
    return 0;
}
