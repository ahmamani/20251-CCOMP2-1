#include <iostream>
#include "Docente.h"

Docente::Docente()
{
    this->name = "";
    this->academic = "";
    this->salary = 0.0;
    this->age = 0;
}

Docente::Docente(std::string name, int age,
                    std::string academic, double salary)
{
    this->name = name;
    this->academic = academic;
    this->salary = salary;
    this->age = age;
}

void Docente::setAcademic(std::string academic) {
    this->academic = academic;
}

std::string Docente::getAcademic() const {
    return this->name;
}

void Docente::setSalary(double salary) {
    this->salary = salary;
}

double Docente::getSalary() const {
    return this->salary;
}

void Docente::print() const {
    std::cout << "Nombre: " << name << ", Edad: " << age
            << ", Grado: " << academic << ", salario: "
                << salary << std::endl;
}


