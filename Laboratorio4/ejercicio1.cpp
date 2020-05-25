#include <iostream>
using namespace std;


int main()
{
	int a, b, op, div;
	
	
	cout<<endl<<"VERIFICACION DE NUMEROS DIVISIBLES"<<endl;
	
	cout<<"\nDigite un numero: ";
	cin>>a;
	
	cout<<"\nDigite otro numero: ";
	cin>>b;
	
	op = a%b;
	
	div = a/b;
	
	if (op == 0)
	{
		
		cout<<"\nLa divison es posible"<<endl;
		cout<<"\nLa respuesta de la division es: "<<div<<endl;	
	}	
	else{
		cout<<"\nLa division no es posible";
	}
	
	
	
	return 0;
}