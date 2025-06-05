#ifndef AZULITO_H
#define AZULITO_H

#include "Persona.h"
#include "Hora.h"


class Azulito : public Persona
{
    public:
        Azulito(std::string n, int e, std::string area, Hora entrada, Hora salida);

        void setArea(std::string area);
        std::string getArea() const;

        Hora getEntrada() const;
        void setEntrada(Hora h);

        Hora getSalida() const;
        void setSalida(Hora h);

        void print() const;

    protected:
        std::string area;
        Hora entrada;
        Hora salida;
};

#endif // AZULITO_H
