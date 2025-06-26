#ifndef MOTO_H
#define MOTO_H


class Moto : public Vehiculo
{
    public:
        Moto(std::string marca, std::string modelo, int anho, int nruedas)
            :Vehiculo(marca, modelo, anho), nroruedas{nruedas}{}

        std::string getTipoVehiculo() const {
            return "moto";
        }

        void print() const {
            std::cout << "==========================    MOTO    ===================" << std::endl;
            Vehiculo::print();
            std::cout << "Nro Ruedas: " << nroruedas << std::endl;
            std::cout << "===========================================================" << std::endl;
        }
        virtual ~Moto(){}
    private:
        int nroruedas;

};

#endif // MOTO_H
