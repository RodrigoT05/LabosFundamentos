#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << endl<<"VERIFICADOR DE PALABRAS MAYORES O MENORES A 10 CARACTERES"<<endl;

    string palabra;
    int longitud;

    cout << endl <<"Escriba una palabra: ";
    cin >> palabra;

    longitud = palabra.length();

    cout <<"\nLos caracteres totales de la palabra son: "<<longitud<<endl;

    if (longitud == 10){

        cout <<"\nLa palabra tiene 10 caracteres"<<endl;
    }
    else if (longitud > 10){

        cout <<"\nLa palabra tiene mas de 10 caracteres"<<endl;
    }
    else{

        cout <<"\nLa palabra tiene menos de 10 caracteres"<<endl;

    }if (longitud % 2 == 0){

        cout <<"\nLa cantidad de caracteres de la palabra es un numero par"<<endl;
    }else{

        cout <<"\nLa cantidad de caracteres de la palabra es un numero impar"<<endl;
    }

    return 0;
}