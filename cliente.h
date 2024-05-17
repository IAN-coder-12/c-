#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Cliente{
    private:
        string telefono;
    public:
        string nombre;
        string username;
        string correo;

    // Constructor
    Cliente(string, string, string, string);
    
    // Método
    void infoCliente();
};

class Direccion : public Cliente{
    public:
        string estado;
        string calle;
        int cp;
        // Constructor clase hija
        Direccion(string, string, string, string, string, string, int); 
        // Método
        void infoDireccion();

};