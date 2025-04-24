#include <iostream>

using namespace std;

int main()
{
    string str = "ciencia";
    char cad[] = {'c', 'i', 'e', 'n', 'c', 'i', 'a', '\0'};

    cout << str << endl;
    cout << cad << endl;

    char *ptr = cad;
    cout << ptr << endl;

    //char *ptr2 = str;


    return 0;
}
