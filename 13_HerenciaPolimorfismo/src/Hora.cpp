#include <iostream>
#include "Hora.h"

Hora::Hora(){
    this->hour = this->minutes = this->seconds = 0;
}

Hora::Hora(int h, int m, int s): hour{h}, minutes{m}, seconds{s}
{
}

void Hora::setHour(int h) {
    this->hour = h;
}

int Hora::getHour() const {
    return this->hour;
}

void Hora::setMinutes(int m){
    this->minutes = m;
}

int Hora::getMinutes() const {
    return this->minutes;
}

void Hora::setSeconds(int s) {
    this->seconds = s;
}

int Hora::getSeconds() const {
    return this->seconds;
}

void Hora::print() const {
    std::cout << hour << ":" << minutes << ":" << seconds;
}
