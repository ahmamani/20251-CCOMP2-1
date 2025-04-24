#include <iostream>

using namespace std;

/**
* Implemente un función que reciba un arreglo de enteros y su tamaño
* y retorne la suma de los elementos del arreglo, USANDO PUNTEROS.
**/
int sumElemsArray(int arr[], int size) {
    int *ptr = arr;
    int sum = 0;
    for(int i = 0; i < size; i++, ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sumElemsArray(arr, size) << endl;
    return 0;
}
