#include <iostream>
#include <vector>
#include "Persona.h"
#include "Student.h"
#include "Docente.h"
#include "Azulito.h"


using namespace std;

int main()
{
    /**
    * CREAR UN VECTOR O ARREGLO DE PUNTEROS A PERSONA Y
    * AGREGAR ELEMENTOS (DOCENTE Y STUDENTS) AL VECTOR O
    * ARREGLO.
    * POSTERIORMENTE RECORRER LOS ELEMENTOS DEL VECTOR O
    * ARREGLO E IMPRIMIR LOS DATOS INVOCANDO A LA FUNCION
    * PRINT.
    **/

    Docente *pdocente = new Docente("Julio", 30, "Doctor", 3000);
    Student *pStudent = new Student("Fabio", 18, 1234123);

    Hora entrada(07, 00, 00);
    Hora salida(15, 00, 00);
    Azulito *pAzul = new Azulito("Frank", 35, "Patio", entrada, salida);

    vector<Persona *> vec;
    vec.push_back(pdocente);
    vec.push_back(pStudent);
    vec.push_back(pAzul);

    for(Persona *p : vec) {
        p->print();
    }
    return 0;
}
