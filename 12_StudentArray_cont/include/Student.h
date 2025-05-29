#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
    private:
        std::string name;
        int age;
        int code;
    public:
        Student(); // default constructor
        Student(std::string n, int a, int c);
        ~Student();
        void setName(std::string n);
        void setAge(int a);
        void setCode(int c);
        std::string getName() const;
        int getAge() const ;
        int getCode() const;
        void print() const;
};


#endif // STUDENT_H
