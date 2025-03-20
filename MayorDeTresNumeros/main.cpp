#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite 3 numeros e imprima
* el mayor, el menor y el intermedio
*/
int main()
{
    int mayor, menor, intermedio;
    int num1, num2, num3;
    cout << "Ingrese primer numero: ";
    cin >> num1;
    mayor = menor = intermedio = num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;
    if(num2 > mayor) {
        mayor = num2;
    } else {
        menor = num2;
    }
    cout << "Ingrese tercer numero: ";
    cin >> num3;
    if(num3 > mayor) {
        mayor = num3;
    } else {
        if(num3 < menor) {
            menor = num3;
        }
    }
    cout << "El numero mayor es : " << mayor << endl;
    cout << "El numero menor es : " << menor << endl;


    return 0;
}
