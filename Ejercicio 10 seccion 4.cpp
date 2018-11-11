/*10. Escriba un programa que calcule el valor de:
	1!+2!+3!+...+n!. (Suma de factoriales)*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int n,multiplicacion=1,suma=0;
	
	cout<<"Ingrese el valor de elementos de la lista: ";cin>>n;
	
	for(int b=1;b<=n;b++){
		multiplicacion*=b;
		suma+=multiplicacion;
	}
	cout<<"\nLa suma de los factoriales de "<<n<<" elementos es: "<<suma<<endl;
	getch();
	return 0;
}
