/*15. Realice un programa que solicite al usuario que piense un numero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese
mismo rango [1-100], e indicarle al usuario si el numero que digitó es 
menor o mayor al numero aleatorio, así hasta que lo adivine y por ultimo
mostrale el numero de intentos que le llevo.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int ale,l,con=0;

	srand(time(NULL));
	ale=1+rand()%(100);	
	do{
		cout<<"Ingrese un numero en el rango [1-100]: ";cin>>l;
		cout<<endl;
		if(l<ale){
			cout<<"El numero que digito es menor que el aleatorio"<<endl;
		}
		if(l>ale){
			cout<<"El numero que digito es mayor que el aleatorio"<<endl;
		}
		con++;
	}while(ale!=l);
	cout<<"\n\tFELICIDADES"<<endl;
	cout<<"El numero de intentos hasta que el aleatorio y el digitado se hicieron iguales fue: "<<con<<endl;
	cout<<"¿PUEDES HACERLO EN MENOS INTENTOS?"<<endl;
	system("pause");
	return 0;
}

