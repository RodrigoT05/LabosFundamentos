#include<iostream>
using namespace std;

int repeticiones(int arreglo[], int n, int num);
int main(){

    int arreglo[100], n, num;

    cout<<"Ingrese el numero de elementos que debe tener el arreglo: ";
    cin>>n;

        for (int i = 0; i < n; i++)
    {
        cout<<"Digite un numero: ";
        cin>>arreglo[i];
    }
    

    cout<<"Ingrese el numero a comparar: ";
    cin>>num;

    cout<<"El numero de veces que se repite el numero "<<num<<" es: "<<repeticiones(arreglo,n,num)<<endl;
    
    return 0;
}

int repeticiones(int arreglo[], int n, int num){

    int repeticiones = 0;

    for (int i = 0; i < n; i++){

        if (arreglo[i] == num){
            repeticiones++;
        }
        
    }
    return repeticiones;
}