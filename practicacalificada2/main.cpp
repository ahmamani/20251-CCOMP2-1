#include <iostream>
#include <vector>

#include "Vehiculo.h"
#include "Automovil.h"
#include "Moto.h"
//#include "SUV.h"

using namespace std;

int main()
{
    int opt;

    vector<Vehiculo *> vehiculos;

    do{
        cout << endl << endl << endl;
        cout<<"Ingrese una opcion:" << endl;
        cout << "=========================" << endl;
        cout << "1. Registrar vehiculo" << endl;
        cout << "2. Listar vehiculos" << endl;
        cout << "3. Listar vehiculos disponibles" << endl;
        cout << "4. Listar vehiculos reservados" << endl;
        cout << "5. Registrar Alquiler Vehiculo" << endl;
        cout << "6. Salir" << endl;
        cin>>opt;
        cout << endl << endl << endl;
        switch(opt) {
            case 1:{
                int tipo;
                cout << "Ingrese tipo de Vehiculo:" << endl;
                cout << "=========================" << endl;
                cout << "1. Automovil" << endl;
                cout << "2. Moto" << endl;
                cin>>tipo;
                switch(tipo) {
                    case 1:{
                        string marca, modelo, color;
                        int anho, nroasientos;
                        cout << "Ingrese marca: "; cin >> marca;
                        cout << "Ingrese modelo: "; cin >> modelo;
                        cout << "Ingrese Anho: "; cin >> anho;
                        cout << "Ingrese Nro Asientos: "; cin >> nroasientos;
                        cout << "Ingrese Color: "; cin >> color;

                        Automovil *newObj = new Automovil(marca, modelo, anho, nroasientos, color);
                        vehiculos.push_back(newObj);
                        break;
                    }
                    case 2:{
                        string marca, modelo;
                        int anho, nroruedas;
                        cout << "Ingrese marca: "; cin >> marca;
                        cout << "Ingrese modelo: "; cin >> modelo;
                        cout << "Ingrese Anho: "; cin >> anho;
                        cout << "Ingrese Nro Ruedas: "; cin >> nroruedas;

                        Moto *p = new Moto(marca, modelo, anho, nroruedas);
                        vehiculos.push_back(p);
                        break;
                    }
                }
                break;
            }
            case 2: {
                for(Vehiculo *p : vehiculos) {
                    p->print();
                }
                break;
            }
            case 3: {
                for(Vehiculo *p : vehiculos) {
                    if(p->getEstado())
                        p->print();
                }
                break;
            }
            case 4: {
                for(Vehiculo *p : vehiculos) {
                    if(!p->getEstado())
                        p->print();
                }
                break;
            }
            case 5: {
                int tipo;
                cout << "Ingrese que vehiculo desea alquilar:" << endl;
                cout << "=========================" << endl;
                cout << "1. Automovil" << endl;
                cout << "2. Moto" << endl;
                cin>>tipo;
                string tipov = (tipo == 1) ? "automovil" : "moto";
                for(Vehiculo *p : vehiculos) {
                    if(p->getEstado() && p->getTipoVehiculo() == tipov) {
                        p->setEstado(true);
                        cout << tipov << " ALQUILADO." << endl;
                    }
                }
            }
        }

    }while(opt > 0 && opt < 6);
    return 0;
}
