#include <iostream>
#include <vector>
#include "Persona.h"
#include "Student.h"
#include "Docente.h"
#include "PersonaArray.h"

using namespace std;

int main()
{
    Docente *pdocente = new Docente("Julio", 30, "Doctor", 3000);
    Student *pStudent = new Student("Fabio", 18, 1234123);

    Persona *arr[] = {pdocente, pStudent};

    PersonaArray pa(arr, 2);

    pa.print();

    return 0;
}
