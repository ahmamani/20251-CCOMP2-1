#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "Vehiculo.h"

class Automovil : public Vehiculo
{
    public:
        Automovil(std::string marca, std::string modelo, int anho, int nas, std::string color):
                Vehiculo(marca, modelo, anho), nroAsientos{nas}, color{color}{};

        std::string getTipoVehiculo() const {
            return "automovil";
        }

        void print() const {
            std::cout << "=====================  AUTOMOVIL      ======================" << std::endl;
            Vehiculo::print();
            std::cout << "Nro Asientos: " << nroAsientos << std::endl;
            std::cout << "Color: " << color << std::endl;
            std::cout << "===========================================================" << std::endl;
        }
        virtual ~Automovil(){}
    private:
        int nroAsientos;
        std::string color;
};

#endif // AUTOMOVIL_H
