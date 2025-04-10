#include <iostream>

using namespace std;

/**
* Implemente una función que reciba un numero y retorne
* true si es primo y false caso contrario.
*/
bool esPrimo(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}


int main()
{
    cout << esPrimo(99) << endl;
    return 0;
}
