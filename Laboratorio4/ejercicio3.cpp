#include <iostream>
using namespace std;

int main(){

    cout <<endl<<"VERIFICACION DE NUMEROS POSITIVOS, NEGATIVOS O CERO"<<endl;

    float numero;

    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    if (numero > 0){

        cout <<"El numero que ingresaste es positivo"<<endl;
    }
    else if (numero == 0){

        cout <<"El numero que ingresaste es cero"<<endl;
    }
    else
    {
        cout <<"El numero que ingresaste es negativo"<<endl;
        
    }

    return 0;
}