#ifndef PERSONAARRAY_H
#define PERSONAARRAY_H

#include "Persona.h"

class PersonaArray
{
    public:
        int size;
		Persona **data;

    public:
        PersonaArray();
        PersonaArray(Persona *arr[], int size);
        virtual ~PersonaArray();

        int getSize() const;
		void print() const;
		void push_back(Persona* elem);
		void insert(Persona* elem, int pos);
		void remove(int pos);

};

#endif // PERSONAARRAY_H
