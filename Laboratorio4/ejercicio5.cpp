#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<endl<<"VERIFICACION DE PALABRAS QUE TENGAN LAS LETRAS INICIAL Y FINAL IGUALES"<<endl;

    string palabra, primeraletra, ultimaletra;

    cout<<"\nIngrese una palabra: ";
    cin>>palabra;

    primeraletra = palabra[0];
    ultimaletra = palabra[palabra.length() -1];

    if (primeraletra == ultimaletra){

        cout<<"\nLa primera y la ultima letra son la misma"<<endl;
    }
    else {

        cout<<"\nLa primera y la ultima letra son diferentes"<<endl;
    }


    return 0;
}