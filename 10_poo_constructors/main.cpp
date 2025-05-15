#include <iostream>
#include "Student.h"

using namespace std;

/**
* CONSTRUCTOR
*   Método que se invoca cuando se crea una instancia.
*   Método que se invoca cuando se le asigna memoria a
*       una instancia.
* DESTRUCTOR
*   Método que se invoca cuando se libera la memoria de
*       una instancia.
*/

int main()
{
    Student st1;
    st1.print();

    Student st2("Alvaro", 18, 6666660);
    st2.print();
    //st.setName("Juan");
    //st.setAge(20);
    //st.setCode(454545);


    return 0;
}
