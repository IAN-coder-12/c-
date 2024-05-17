#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


class Producto{
    public:
        string nombreP;
        string marca;
        int precio;

    // Constructor
    Producto(string, string, int);
    
    // Método
    void infoProducto();
};