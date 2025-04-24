#include <iostream>

using namespace std;

/**
* Implemente un función que reciba un arreglo de enteros y su tamaño
* y duplique el valor de cada elemento, USANDO PUNTEROS.
* Por ejem    [1 2 3 4]
*             [2 4 6 8]
**/
void printArray(int *arr, int size) {
    int *ptr = arr;
    cout << "[ ";
    for(int i = 0; i < size; i++, ptr++) {
        cout << *ptr << " " ;
    }
    cout << "]" << endl;
}
void duplicarElems(int arr[], int size) {
    for(int i = 0; i < size; i++, arr++)
        *arr *= 2;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    duplicarElems(arr, size);
    printArray(arr, size);

    return 0;
}
