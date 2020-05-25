#include <iostream>
using namespace std;

int main (){

    int a,b,c, promedio;    //Declarando variables de tipo entero.

    string numeros="Ingrese tres numeros enteros y presione enter para conocer su promedio: ";
    cout<<numeros<<endl;
    cin>>a>>b>>c;   //Guardando los valores ingresados por el usuario en las variables.

    promedio = (a+b+c)/3;   //Calculo del promedio.

    cout<<"El promedio de los numeros es: "<<promedio<<endl;  //Impresion de resultados.
    
    return 0;
}