#include <iostream>
#include "Persona.h"

Persona::Persona()
{
    this->name = "";
    this->age = 0;
}

Persona::Persona(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

void Persona::setName(std::string name) {
    this->name = name;
}

std::string Persona::getName() const {
    return this->name;
}

void Persona::setAge(int age) {
    this->age = age;
}

int Persona::getAge() const {
    return this->age;
}

