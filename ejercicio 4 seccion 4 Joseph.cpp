/*4. Escribe un programa que tome cada 4 horas la temperatura exterior, leyendola
durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la
temperatura media, la temperatura mas alta y la mas baja.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float temperatura,mayor=0,menor=99999999999999,sumatotal=0,promedio=0;
	for(int hora=0;hora<24;hora+=4){
		cout<<"La hora es: "<<hora<<endl;
		cout<<"La temperatura es: "; cin>>temperatura;
		sumatotal+=temperatura;
		if(temperatura>mayor){
			mayor=temperatura;
		}
		if(temperatura<menor){
			menor=temperatura;
		}
	}
	promedio=sumatotal/6;
	cout.precision(3);
	cout<<"\nLa temperatura media del dia es: "<<promedio<<endl;
	cout<<"\nLa temperatura mas alta del dia: "<<mayor<<endl;
	cout<<"\nLa temperatura mas baja del dia: "<<menor<<endl;
	getch();
	return 0;
}
