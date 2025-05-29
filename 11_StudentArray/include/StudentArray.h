#ifndef STUDENTARRAY_H
#define STUDENTARRAY_H

#include "Student.h"

class StudentArray {
	private:
		int size;
		Student *data;
	public:
		StudentArray() {
			this->size = 0;
			this->data = new Student[0];	
		}
		StudentArray(Student arr[], int size) {
			this->size = size;
			this->data = new Student[size];
			for(int i = 0; i < size; i++)
				this->data[i] = arr[i];
		}
		~StudentArray() {
			delete[] data;
		}

		int getSize() const {
			return size;
		}

		void print() const {
			for(int i = 0; i < size; i++)
				data[i].print();	
		}

		void push_back(Student elem) {
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

};

#endif
