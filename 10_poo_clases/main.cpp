#include <iostream>
#include "Student.h"

using namespace std;

/**
* Definición de clase:
*   Agrupación de propiedades (datos miembro) y funciones (funciones miembro)
*   relacionadas para crear nuevos tipos de datos.
*
*/

int main()
{
    Student st;
    st.setName("Juan");
    st.setAge(20);
    st.setCode(454545);

    cout << st.getName() << endl;
    cout << st.getAge() << endl;
    cout << st.getCode() << endl;

    return 0;
}
