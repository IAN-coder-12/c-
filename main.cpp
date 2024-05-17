#include "cliente.cpp"
#include "producto.cpp"

int main(){

    cout << "\n---------- BIENVENIDO A MEGANET TECHNOLOGY ------------" << endl;

    cout << "\n TE PRESENTAMOS NUESTRA LISTA DE PRODUCTOS" << endl;
    Producto p1("impresora", "HP", 3500);
    p1.infoProducto();
    Producto p2("audifonos", "APPLE", 2800);
    p2.infoProducto();
    Producto p3("laptop", "DELL", 12000);
    p3.infoProducto();
    Producto p4("teclado", "ACTECK", 800);
    p4.infoProducto();
    Producto p5("pc", "TOSHIBA", 11000);
    p5.infoProducto();
    
    
    //  // Pedir al usuario que ingrese el nombre del producto que desea comprar
    string productoSeleccionado;
    int cantidadProductos;
    int total;
    cout << "\nIngrese el nombre del producto que desea comprar: ";
    cin >> productoSeleccionado;
    cout << "\nIngrese la cantidad que desea comprar: ";
    cin >> cantidadProductos;

    // Verificar si se encontró el producto y mostrar su precio si es así
    if (productoSeleccionado == p1.nombreP) {
        total = p1.precio * cantidadProductos;
    } else if (productoSeleccionado == p2.nombreP){
        total = p2.precio * cantidadProductos;
    } else if (productoSeleccionado == p3.nombreP){
         total = p3.precio * cantidadProductos;
    }else if (productoSeleccionado == p4.nombreP){
         total = p4.precio * cantidadProductos;
    }else if (productoSeleccionado == p5.nombreP){
         total = p5.precio * cantidadProductos;
    }
    cout << "\n-------------------------------------" << endl;
    cout << "\n          ORDEN DE COMPRA     " << endl;

    
    Direccion user1("771-120-29-16", "Ian", "ian.hdzzz", "ianhdez2020@gmail.com", "HIDALGO", "Nicolas Bravo", 42500 );
    user1.infoDireccion();
    
    cout << "\n-------------------------------------\n" << endl;
    cout << "TOTAL\n"<< endl;
    cout << "Producto: " << productoSeleccionado << endl; 
    cout << "Piezas: " << cantidadProductos << endl;
    cout<< "TOTAL $" << total << endl;
    cout << " " << endl;

    return 0;
}