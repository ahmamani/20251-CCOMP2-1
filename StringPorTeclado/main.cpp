#include <iostream>

using namespace std;

int main()
{
    string fullname;
    cout << "Ingresa tu nombre completo por favor ";
    getline(cin, fullname);

    cout << "Hola " << fullname << " :v" << endl;
    cout << "El tamaño de tu nombres es: " << fullname.length() << endl;
    return 0;
}
