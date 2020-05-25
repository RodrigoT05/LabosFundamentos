#include<iostream>
#include<math.h>    //Inclusion de librerias necesarias para los calculos.
#include<conio.h>
using namespace std;
const double pi= 3.141592;  //Declarando pi como una constante de tipo double.

int main(){
    float r=0, area=0, perimetro=0;     //Declarando variables de tipo float.
    string string1="Digite el radio del circulo que quiere calcular: ";     //Haciendo cadenas de texto para el radio, area y periemtro.
    string string2="El area del circulo es: ";                                  
    string string3="El perimetro del circulo es: ";

    cout<<string1<<endl;
    cin>>r;

    area= pi*(pow(r,2));        //Realizacion de calculos para area y perimetro .
    perimetro= 2*pi*r;

    cout<<string2<<area<<endl;
    cout<<string3<<perimetro<<endl; //Imprimiendo los resultados.

    return 0;
}