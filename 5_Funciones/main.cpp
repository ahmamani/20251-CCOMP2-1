#include <iostream>

using namespace std;

/**
* FUNCIONES
* =========
*
*   TIPO_DE_RETORNO NOMBRE_DE_LA_FUNCION(ARGUMENTOS ... ) {
*   }
*
**/
int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Funcion que recibe un entero e imprime si es par o impar
void imprimirParImpar(int num) {
    if(num % 2 == 0) {
        cout << "Es par!!!" << endl;
    } else {
        cout << "Es impar!!!" << endl;
    }
}

int main()
{
    cout << power(3,4) << endl;
    imprimirParImpar(5);
    imprimirParImpar(8);
    return 0;
}
