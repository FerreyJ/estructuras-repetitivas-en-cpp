/*1. Realice un programa que solicite de la entrada est�ndar un entero del 1 al 10 y
muestre en la salida est�ndar su tabla de multiplicar.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int m,n=1;
	
	do{
		cout<<"Ingrese un numero: "; cin>>m;
	}while((m<1)||(m>10));
	
	for(n=1;n<=20;n++){
		cout<<m<<" * "<<n<<" = "<<m*n<<endl;
	}
	system("pause");
	return 0;
}

