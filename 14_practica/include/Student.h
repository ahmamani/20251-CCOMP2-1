#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Persona.h"

class Student : public Persona
{
    private:
        int code;
    public:
        Student(); // default constructor
        Student(std::string n, int a, int c);
        ~Student();

        void setCode(int c);
        int getCode() const;
        void print() const;
};


#endif // STUDENT_H
