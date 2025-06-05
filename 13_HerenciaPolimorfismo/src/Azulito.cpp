#include <iostream>
#include "Azulito.h"

Azulito::Azulito(std::string name, int age, std::string area, Hora entrada, Hora salida)
{
    this->name = name;
    this->age = age;
    this->area = area;
    this->entrada = entrada;
    this->salida = salida;
}

void Azulito::setArea(std::string area) {
    this->area = area;
}

std::string Azulito::getArea() const {
    return this->area;
}

Hora Azulito::getEntrada() const {
    return this->entrada;
}

void Azulito::setEntrada(Hora h) {
    this->entrada = h;
}

Hora Azulito::getSalida() const {
    return this->salida;
}

void Azulito::setSalida(Hora h) {
    this->salida = h;
}

void Azulito::print() const {
    std::cout << "Nombre: " << name << ", Edad: " << age << ", Sector: " << area
            << ", Hora Entrada: ";
    entrada.print();
    std::cout << ", Hora Salida: ";
    salida.print();
    std::cout << std::endl;
}
