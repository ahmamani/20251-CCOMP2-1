#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    for(int i = 0; i < 6; i++)
        cout << arr[i] << endl;

    // contar cuantos nros pares tiene el arreglo
    int cont = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0)
            cont++;
    }
    cout << "El arreglo tiene " << cont << " pares." << endl;


    return 0;
}
