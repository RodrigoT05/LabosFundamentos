#include <iostream>
#include <string>
using namespace std;

int main(){

    string color1="\n1.Amarillo.", color2="\n2.Azul.", color3="\n3.Rojo.", color4="\n4.Verde.", color5="\n5.Blanco.";
    int colorElegido;

    cout<<"\nOPCIONES DE COLORES QUE TIENEN DIFERENTES VALORES EN DOLARES";
    cout<<endl<<"\nLa lista de colores a elegir es la siguiente: "<<color1<<color2<<color3<<color4<<color5<<endl;
    cout<<"\nPor favor ingrese el numero del color que desea elegir:  ";
    cin>>colorElegido;

    if ( colorElegido == 1 ){

        cout<<"\nFelicitaciones! Usted ha ganado 1$."<<endl;
    }
    else if ( colorElegido == 2 ){

        cout<<"\nFelicitaciones! Usted ha ganado 5$."<<endl;
    }
    else if ( colorElegido == 3 ){

        cout<<"\nFelicitaciones! Usted ha ganado 10$."<<endl;
    }
    else if ( colorElegido == 4 ){

        cout<<"\nFelicitaciones! Usted ha ganado 25$."<<endl;
    }
    else if ( colorElegido == 5 ){

        cout<<"\nFelicitaciones! Usted ha ganado 50$."<<endl;
    }
    else{

        cout<<"\nEl numero que ha ingresado no esta en la lista."<<endl;
    }
    

    return 0;
}