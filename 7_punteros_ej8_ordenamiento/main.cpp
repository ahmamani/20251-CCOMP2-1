#include <iostream>

using namespace std;

/**
* Dado un arreglo de enteros
* Ordenar dicho arreglo usando el algoritmo
* bubblesort
*/
void printArray(int *arr, int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}
void bubblesort(int *arr, int size) {
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        for(ptr = arr; ptr < arr+size-i-1; ptr++) {
            if(*ptr > *(ptr+1)) {
                int tmp = *ptr;
                *ptr = *(ptr+1);
                *(ptr+1) = tmp;
            }
        }
    }
}
int main()
{
    int arr[] = {5,3,2,8,7,1,4,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // bubblesort - n*n
    bubblesort(arr, size);

    printArray(arr, size);

    return 0;
}
