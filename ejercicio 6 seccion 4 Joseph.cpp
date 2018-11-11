/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos,
sin utilizar la función pow.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,resultado=1;
	
	cout<<"Introduzca el valor de x: "; cin>>x;
	cout<<"\nIntroduzca el valor de y: "; cin>>y;
			
	for(int elevacion=1;elevacion<=y;elevacion++){
		resultado*=x;
	}
	
	cout<<"\nEl resultado de "<<x<<"^"<<y<<" = "<<resultado<<endl;
	getch();
	return 0;
}
