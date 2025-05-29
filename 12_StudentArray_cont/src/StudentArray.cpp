#include "StudentArray.h"

StudentArray::StudentArray() {
    this->size = 0;
    this->data = new Student[0];
}

StudentArray::StudentArray(Student arr[], int size) {
this->size = size;
    this->data = new Student[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

StudentArray::~StudentArray() {
    delete[] data;
}

int StudentArray::getSize() const {
    return size;
}

void StudentArray::print() const {
    for(int i = 0; i < size; i++)
        data[i].print();
}

void StudentArray::push_back(Student elem) {
    /**
    * 1. Reserva memoria para un arreglo de tamaÑo size+1
    * 2. Copiar los elems de data a tmp
    * 3. copia el nuevo elem al final de tmp
    * 4. actualizar size a size+1
    * 5. liberar la memoria apuntada por data
    * 6. hacer que data apunte a tmp
    **/
    Student *tmp = new Student[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    tmp[size] = elem;
    size += 1;
    delete[] data;
    data = tmp;
}

void StudentArray::insert(Student elem, int pos) {
    /**
    * 1. Reservar memoria para un arreglo de tamaño size+1
    * 2. Copiar los elementos hasta pos
    * 3. Agregar elem a pos
    * 4. Terminar de copiar los elementos de data a tmp
    * 5. actualizar size a size+1
    * 6. liberar la memoria apuntada por data
    * 7. hacer que data apunte a tmp
    **/
    Student *tmp = new Student[size+1];
    for(int i = 0; i < pos; i++)
        tmp[i] = data[i];
    tmp[pos] = elem;
    for(int i = pos; i < size; i++)
        tmp[i+1] = data[i];
    size += 1;
    delete[] data;
    data = tmp;
}

void StudentArray::remove(int pos) {
    /**
    * 1. Reservar memoria para un arreglo de tamaño size-1
    * 2. Copiar los elems de data a tmp sin considerar el elem en la posicion pos
    * 3. actualizar size a size-1
    * 4. liberar memoria apuntada por data
    * 5. hacer que data apunte a tmp
    **/
    Student *tmp = new Student[size-1];
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











