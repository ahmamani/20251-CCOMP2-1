#include <iostream>

using namespace std;

/**
* DEFINICIÓN DE ARREGLOS
*   Conjunto de elementos del mismo tipo de dato
*   almacenados en memoria de forma consecutiva.
*/

void printArray(int *arr, int size) {
    int *ptr = arr;
    cout << "[ ";
    for(int i = 0; i < size; i++, ptr++) {
        cout << *ptr << " " ;
    }
    cout << "]" << endl;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};

    int *ptr;
    ptr = &arr[0];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = &arr[1];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = &arr[2];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = &arr[3];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = &arr[4];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = &arr[5];
    cout << ptr << endl;
    cout << *ptr << endl;

    /**
    * El nombre de un arreglo es un puntero constante al
    * primer elemento del arreglo
    */
    cout << (arr+0) << endl;
    cout << (arr+1) << endl;
    cout << (arr+2) << endl;
    cout << (arr+3) << endl;
    cout << (arr+4) << endl;
    cout << (arr+5) << endl;

    /**
    * ARITMÉTICA DE PUNTEROS
    *  Se pueden usar los operadores ++ -- en punteros
    *       ptr++  // va a apuntar al siguiente elemento.
    */
    ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);


    return 0;
}
