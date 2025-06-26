#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo
{
    public:
        Vehiculo(std::string marca, std::string modelo, int anho):
                marca{marca}, modelo{modelo}, anho{anho}, estado{false}{}
        std::string getMarcar() const {
            return marca;
        }
        void setMarca(std::string marca) {
            this->marca = marca;
        }
        std::string getModelo() const {
            return modelo;
        }
        void setModelo(std::string modelo) {
            this->modelo = modelo;
        }
        int getAnho() const {
            return anho;
        }
        void setAnho(int anho) {
            this->anho = anho;
        }
        virtual void print() const {
            std::cout << "ESTADO: " << ((estado) ? "Disponible" : "No Disponible") << std::endl;
            std::cout << "Marca: " << marca << std::endl;
            std::cout << "Modelo: " << modelo << std::endl;
            std::cout << "Anho: " << anho << std::endl;
        }
        virtual std::string getTipoVehiculo() const = 0;
        bool getEstado() const{
            return estado;
        }
        void setEstado(bool estado) {
            this->estado = estado;
        }
        virtual ~Vehiculo(){}
    protected:
        std::string marca;
        std::string modelo;
        int anho;
        bool estado;
};

#endif // VEHICULO_H
