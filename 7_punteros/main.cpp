#include <iostream>

using namespace std;

/**
* PUNTEROS
* ========
*
* Definici�n: Es una variable que almacena direcci�n de
*               memoria de otra variable del mismo tipo.
*
* Declaraci�n: TIPO_DE_DATO *NOMBRE_DEL_PUNTERO;
*
* Operador de Direcci�n (&): Es un operador unario que obtiene
*                           la direcci�n de memoria de una variable.
*
* Operador de Indirecci�n (*): Es un operador unario que sirve para
*                           obtener el valor de una direcci�n de memoria.
*
*
**/
int main()
{
    int *ptr; // declarando un puntero que se llama ptr
              // y apunta a variables de tipo int.

    int val = 30; // declarando una variable de tipo int

    cout << val << endl;    // imprime el valor de val que es 30
    cout << &val << endl;   // imprime la direccion de memoria de val

    ptr = &val;
    cout << ptr << endl;   // imprime la direccion de memoria de val
    cout << *ptr << endl;  // imprime el valor de val que es 30

    *ptr = 1000;
    cout << val << endl;    // imprime el valor de val que es 1000

    int *ptr2 = &val;
    *ptr2 = 500;
    cout << *ptr2 << endl;

    double d = 20.5;
    double *ptr3 = &d;
    cout << *ptr3 << endl;

    char car = 'A';
    char *ptr4 = &car;
    cout << *ptr4 << endl;

    return 0;
}






