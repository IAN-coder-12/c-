#pragma once
#include "producto.h"


Producto::Producto(string _nombreP, string _marca, int _precio){
    nombreP = _nombreP;
    marca = _marca;
    precio = _precio;
    
}

void Producto::infoProducto(){
    cout << "\n-------------------------------------\n" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Producto: " << nombreP << endl;
    cout << "Precio: " << precio << endl;
    
}



