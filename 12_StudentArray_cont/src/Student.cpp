#include "Student.h"

Student::Student() {
    this->age = 0;
    this->code = 0;
    this->name = "";
}

Student::Student(std::string name, int age, int code) {
    this->age = age;
    this->code = code;
    this->name = name;
}

Student::~Student() {}

void Student::setAge(int age) {
    this->age = age;
}

int Student::getAge() const {
    return this->age;
}

void Student::setName(std::string name) {
    this->name = name;
}

std::string Student::getName() const {
    return this->name;
}

void Student::setCode(int code) {
    this->code = code;
}

int Student::getCode() const {
    return this->code;
}

void Student::print() const {
    std::cout << "Nombre: " << name
        << ", age: " << age << ", code: " << code << std::endl;
}
