#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c;

    cout<<"Digite el valor de a: "<<endl;
    cin>>a;

    cout<<"Digite el valor de b: "<<endl;
    cin>>b;

    cout<<"Digite el valor de c: "<<endl;
    cin>>c;

    if ( pow((b/a)/2,2) == c/a){

        cout<<"Es un trinomio cuadrado perfecto"<<endl;
    }
    else{

        cout<<"No es un trinomio cuadrado perfecto"<<endl;
    }

    return 0;
}