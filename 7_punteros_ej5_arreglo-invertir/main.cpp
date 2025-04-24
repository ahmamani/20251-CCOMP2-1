#include <iostream>

using namespace std;

/**
* Implemente un función que reciba un puntero al inicio y un puntero
* al final de un arreglo de enteros e invierta los elementos de dicho
* arreglo, USANDO PUNTEROS.
**/
void printArray(int *arr, int size) {
    int *ptr = arr;
    cout << "[ ";
    for(int i = 0; i < size; i++, ptr++) {
        cout << *ptr << " " ;
    }
    cout << "]" << endl;
}
void invertir(int *ini, int *fin) {
    while(ini < fin) {
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *inicio = arr;
    int *fin = arr + size - 1;
    printArray(arr, size);
    invertir(inicio, fin);
    printArray(arr, size);
    return 0;
}
