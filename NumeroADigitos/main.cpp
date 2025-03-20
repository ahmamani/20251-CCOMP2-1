#include <iostream>

using namespace std;
/**
* Implemente un programa que solicite un numero de 4 digitos
* e imprima dicho cada digito de dicho numero horizontalmente
* Ejemplo:   3216
*           3
*           2
*           1
*           6
*/
int main()
{
    long var;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> var;
    if(var >= 1000 && var <= 9999) {
        cout << (var / 1000) << endl;
        cout << (var / 100) % 10 << endl;
        cout << (var % 100) / 10 << endl;
        cout << (var % 10) << endl;
    } else {
        cout << "Numero invalido!!!" << endl;
    }


    return 0;
}
