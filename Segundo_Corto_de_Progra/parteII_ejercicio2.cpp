#include <iostream>
#include <string>

using namespace std;

int main(){


    string pais1="\n1.El Salvador", pais2="\n2.Guatemala", pais3="\n3.Honduras", pais4="\n4.Espana";
    int paisElegido;
    float dinero, IVA;

    cout<<endl<<"PROGRAMA QUE CALCULA EL IVA DE UNA CANTIDAD DE DINERO INGRESADA PARA 4 PAISES"<<endl;

    cout<<"\nLa lista de paises disponibles es la siguiente: "<<endl<<pais1<<pais2<<pais3<<pais4<<endl;

    cout<<"\nIngrese el numero del pais que desea elegir: ";
    cin>>paisElegido;

   
    if ( paisElegido == 1 ){

        cout<<"\nHas seleccionado El Salvador"<<endl;
        cout<<"\nPor favor ingrese la cantidad de dinero en USD a la que desea conocer el IVA: ";
        cin>>dinero;
        IVA = dinero*0.13;
    }
    else if ( paisElegido == 2 ){

        cout<<"\nHas seleccionado Guatemala"<<endl;
        cout<<"\nPor favor ingrese la cantidad de dinero en USD a la que desea conocer el IVA: ";
        cin>>dinero;
        IVA = dinero*0.09;
    }
    else if ( paisElegido == 3 ){

        cout<<"\nHas seleccionado Honduras"<<endl;
        cout<<"\nPor favor ingrese la cantidad de dinero en USD a la que desea conocer el IVA: ";
        cin>>dinero;
        IVA = dinero*0.15;
    }
     else if ( paisElegido == 4 ){

        cout<<"\nHas seleccionado Espana"<<endl;
        cout<<"\nPor favor ingrese la cantidad de dinero en USD a la que desea conocer el IVA: ";
        cin>>dinero;
        IVA = dinero*0.20;
    }
    else{

        cout<<"\nDisculpe, ese numero no pertenece a ninguno de los paises que estan en la lista"<<endl;
    }

     cout<<"\nEl IVA de la cantidad que ingreso es: "<<IVA<<endl;





    return 0;
}