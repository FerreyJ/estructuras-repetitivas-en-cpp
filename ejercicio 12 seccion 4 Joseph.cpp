/*12. Hacer un programa que calcule el resultaod de la siguiente expresion:
	1-2+3-4+5-6+...+n.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,par,impar,sumap=0,sumai=0,suma=0;
	
	cout<<"Introduzca el numero de elementos de la lista: ";cin>>n;
	
	for(int e=1;e<=n;e++){
		if(e%2==0){
			par=e*-1;
			sumap+=par;
		}
		else{
			impar=e;
			sumai+=impar;
		}
		suma=sumap+sumai;
	}
	
	cout<<"\nEl resultado de la lista con "<<n<<" elementos es: "<<suma<<endl;
	
	getch();
	return 0;
}
