#ifndef STUDENTARRAY_H
#define STUDENTARRAY_H

#include "Student.h"

class StudentArray {
	private:
		int size;
		Student *data;
	public:
		StudentArray();
		StudentArray(Student arr[], int size);
		~StudentArray();

		int getSize() const;
		void print() const;
		void push_back(Student elem);
		void insert(Student elem, int pos);
		void remove(int pos);

};

#endif
