#include "PersonaArray.h"

PersonaArray::PersonaArray()
{
    this->size = 0;
    this->data = new Persona*[0];
}

PersonaArray::PersonaArray(Persona *arr[], int size)
{
    this->size = size;
    this->data = new Persona*[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

PersonaArray::~PersonaArray()
{
    delete[] data;
}

int PersonaArray::getSize() const {
    return size;
}

void PersonaArray::print() const {
    for(int i = 0; i < size; i++)
        data[i]->print();
}

void PersonaArray::push_back(Persona* elem) {
    Persona **tmp = new Persona*[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    tmp[size] = elem;
    size += 1;
    delete[] data;
    data = tmp;
}

void PersonaArray::insert(Persona* elem, int pos) {
    Persona **tmp = new Persona*[size+1];
    for(int i = 0; i < pos; i++)
        tmp[i] = data[i];
    tmp[pos] = elem;
    for(int i = pos; i < size; i++)
        tmp[i+1] = data[i];
    size += 1;
    delete[] data;
    data = tmp;
}

void PersonaArray::remove(int pos) {
    Persona **tmp = new Persona*[size-1];
    for(int i = 0; i < size; i++) {
        if(i <= pos)
            tmp[i] = data[i];
        else
            tmp[i-1] = data[i];
    }
    size -= 1;
    delete[] data;
    data = tmp;
}


