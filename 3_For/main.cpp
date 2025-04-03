#include <iostream>

using namespace std;
 /**
 * BUCLE FOR
 *  Es una estructura de control de flujo
 *
 *  for(INICIALIZACION; CONDICION; INCREMENTO) {
 *      // MIENTRAS LA CONDICION SE CUMPLA SE EJECUTAN LAS SENTENCIAS
 *     sentencia 1
 *     sentencia 2
 *     sentencia ...
 *     sentencia N
 *  }
 *
 **/
int main()
{
    string name = "Ciencia de la Computacion";
    for( int i = 0; i < name.length(); i=i+1 ) {
        cout << name.at(i) << endl;
    }
    return 0;
}
