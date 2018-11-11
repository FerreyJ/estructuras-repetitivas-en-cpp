/*2. Escriba un programa que lea de la entrada estándar números hasta que se introduzca
un cero. En ese momento el programa debe terminar y mostrar en la salida estándar el 
número de valores mayores que cero leídos.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,con=0;
	
	do{
		cout<<"Introduzca un numero: ";cin>>n;
		if (n>0){
			con++;
		}
	}while(n!=0);
	
	cout<<"\nEl numero de valores mayores que cero digitados es: "<<con<<endl;
	
	getch();
	return 0;
}

