#include <iostream>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una cadena: " << endl;
    getline(cin, cadena);

    int len = cadena.length()/2;
    int fin = cadena.length()-1;
    bool flag = true;
    for(int ini = 0; ini < len; ini++, fin--) {
        if(cadena.at(ini) != cadena.at(fin)){
            flag = false;
        }
    }
    if(flag) {
        cout << "Es palindrome!!" << endl;
    } else {
        cout << "NO ES palindrome!!" << endl;
    }

    return 0;
}
