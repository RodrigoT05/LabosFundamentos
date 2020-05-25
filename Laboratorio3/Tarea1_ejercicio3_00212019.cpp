#include<iostream>
#include<math.h>    //Inclusion de librerias para los calculos.
using namespace std;

int main(){

    float a=0, b=0, c=0, x1, x2;       //Declarando variables de tipo flotante.
    string valores = "Ingrese los valores de a, b y c: ";
    string resultado1 = "La primera solucion es: ";             
    string resultado2 = "La segunda solucion es: ";         //Definiendo cadenas de texto.

    cout<<valores<<endl;
    cin>>a>>b>>c;

    x1 = ((-b) + sqrt(pow(b,2)-4*a*c))/(2*a);       

    x2 = ((-b) - sqrt(pow(b,2)-4*a*c))/(2*a);     //Realizando calculos.

    cout<<resultado1<<x1<<endl;
    cout<<resultado2<<x2<<endl;     //Imprimiendo los resultados.

    return 0;
}