#include <iostream>
using namespace std;

int main(){

    int a, par;

    cout<<endl<<"VERIFICACION DE NUMEROS PARES"<<endl;

    cout<<"\nDigite un numero: ";
    cin>>a;

    par = a%2;

    if (par == 0)
    {

        cout<<"\nEl numero es par"<<endl;

    } else
    {
        cout<<"\nEl numero es impar"<<endl;
    }
    


    return 0;
}

