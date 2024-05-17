#pragma once
#include "cliente.h"


Cliente::Cliente(string _telefono, string _nombre, string _username, string _correo){
    telefono = _telefono;
    nombre = _nombre;
    username = _username;
    correo = _correo;
}

Direccion::Direccion(string _telefono, string _nombre, string _username, string _correo, string _estado, string _calle, int _cp) : Cliente(_telefono, _nombre, _username, _correo){
    estado = _estado;
    calle = _calle;
    cp = _cp;
}


void Cliente::infoCliente(){
    cout << "\n-------------------------------------\n" << endl;
    cout << "DATOS CLIENTE\n" << endl;
    cout << "Username: " << username << endl;
    cout << "Correo: " << correo << endl;
    cout << "Telefono: " << telefono << endl;
   
}

void Direccion::infoDireccion(){
    infoCliente();
    cout << "\n-------------------------------------\n" << endl;
    cout << "DIRECCION ENVÍO\n"<< endl;
    cout << "Estado: " << estado << endl;
    cout << "Calle: " << calle << endl;
    cout << "Codigo Postal: " << cp << endl;
}

