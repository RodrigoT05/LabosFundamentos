#include<iostream>
using namespace std;

/* Este codigo es una variante del ejercicio 4 en caso de que no cumpla con las indicaciones;
es mas simple y general.  */

int main(){

    string nombre;
    float precio, total;
    int cantidad;

    cout<<"Ingrese el nombre del producto: "<<endl;
    cin>>nombre;

    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precio;

    cout<<"Ingrese la cantidad que desea adquirir: "<<endl;
    cin>>cantidad;

    total = precio*cantidad;

    cout<<"El precio total a pagar es: "<<total<<endl;

    return 0;
}