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
        Student() { // default constructor
            name = "";
            age = 0;
            code = 0;
        }
        Student(std::string n, int a, int c) {
            name = n;
            age = a;
            code = c;
        }
        ~Student() {
        }
        void setName(std::string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setCode(int c) {
            code = c;
        }
        std::string getName() const {
            return name;
        }
        int getAge() const {
            return age;
        }
        int getCode() const {
            return code;
        }
        void print() const {
            std::cout << name << std::endl;
            std::cout << age << std::endl;
            std::cout << code << std::endl;
        }
};

#endif // STUDENT_H
