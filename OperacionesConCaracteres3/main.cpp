#include <iostream>

using namespace std;

/**
* Implemente un program que solicite por teclado 2
* caracteres y:
* 1. Validar si dichos caracteres representan un numero
* 2. Imprimir la suma de dichos numeros.
* Por ejm.
*       1
*       5
*      La suma de dichos numeros es 6
*/
int main()
{
    cout<< "ingrese un caracter: ";
    char val1;
    char val2;
    int val3;
    int val4;
    cin>> val1;
    cin>> val2;

    val3=static_cast<int>(val1)-48;
    val4=static_cast<int>(val2)-48;
        if((val1>=48 && val1<=56)&&(val2>=48 && val2<=56)){
            cout<< val3+val4<< endl;
        } else{
        cout<< "NO SEEEEEEEE" << endl;
        }
    return 0;
}
