/*8. Escriba un programa que calcule el valor de:
	1+3+5+...+2n-1.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Introduzca el numero de elementos de la lista: ";cin>>n;
	
	for(int j=1;j<=(2*n)-1;j+=2){
		suma+=j;
	}
	cout<<"\nLa suma de los valores de "<<n<<" numeros es: "<<suma<<endl;
	getch();
	return 0;
}

