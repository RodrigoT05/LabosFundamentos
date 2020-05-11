#include<iostream>
using namespace std;

int main(){

    int unidad = 0;     //Declaro las variables de unidad y total a pagar como enteras.
    float precio = 0.25, total;       //Declaro la variable del precio como una de tipo flotante.
    string bienvenida = "Bienvenidos a Dorito's World (Solo vendemos doritos de queso xd)";
    string cantidad = "Cuantas unidades desea adquirir? ";
    string pago = "El total a pagar sera de: ";
    string moneda = " dolares";                 //Defino cadenas de texto.

    cout<<endl<<bienvenida<<endl<<endl;         //Doy la bienvenida a la tienda
    cout<<cantidad<<endl;                       //Le pregunto al usuario la cantidad de producto que desea.
    cin>>unidad;          //Guardo el valor asignado por el usuario de la cantidad a las unidades del producto.

    total = unidad*precio;          //Realizando calculos.

    cout<<pago<<total<<moneda<<endl;    //Imprimo los resultados.

    return 0;
}