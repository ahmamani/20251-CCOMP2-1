#include <iostream>
/* revisar */
#include <array>
#include <vector>

using namespace std;
/**
* Dado un arreglo de enteros
* Ordenar dicho arreglo usando el algoritmo
* bubblesort
*/
int main()
{
    int arr[] = {4,56,8,76,5,7,9,0,6,45};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
