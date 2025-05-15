#include <iostream>

using namespace std;

/**
* Operador new: se utiliza para reservar memoria de una variable u objeto.
* Operador delete: se utiliza para liberar la memoria de una variable u objeto
*       reservado con new.
*/
int* f() {
    int x = 10;
    return &x;
}

int* f2() {
    int *p = new int;
    *p = 5000;
    return p;
}

int main()
{
    int *ptr;

    if(true) {
        int x = 10;
        ptr = &x;
    }

    cout << *ptr << endl;

    /*int *ptr2 = f();
    cout << *ptr2 << endl;*/

    int *ptr3 = new int; // estoy resenvando memoria en el heap para un entero
    *ptr3 = 100;
    cout << *ptr3 << endl;
    delete ptr3;

    int *ptr4 = f2();
    cout << *ptr4 << endl;
    delete ptr4;

    return 0;
}
