/*5. Escriba un programa que lea los valores enteros hasta que se introduzca un valor
en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de
los valores mayores a 0 introducidos.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,contar=0;
	
	do{
		cout<<"Introduzca un numero: "; cin>>numero;
		if(numero>0){
			contar+=numero;
		}
	}while((numero!=0)&&((numero<20)||(numero>30)));
	
	cout<<"\nLa suma de valores introducidos es: "<<contar<<endl;
	
	getch();
	return 0;
}

