#include <string>

using namespace std;

class Producto {
private:
    double precio;
    string nombre;
    int cantidad;
public:
    Producto(double precio, string nombre, int cantidad): precio(precio), nombre(nombre), cantidad(cantidad){};

    void mostrarProducto(int);
};

