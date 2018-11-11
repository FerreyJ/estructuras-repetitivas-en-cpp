/*9. Escriba un programa que calcule el valor de:
	1*2*3*...*n(factorial de un numero).*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,multiplicacion=1;
	
	cout<<"Introduzca el ultimo elemento de la lista: "; cin>>n;
	
	for(int a=1;a<=n;a++){
		multiplicacion*=a;
	}
	cout<<"\nEl resultado de multiplicar "<<n<<" numeros es: "<<multiplicacion<<endl;
	getch();
	return 0;
}
