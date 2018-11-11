/*14. En una clase de 5 alumnos se han realizado 3 examenes y se requiere
determinar el numero de alumnos que:
	a)Alumnos que aprobaron todos los examenes.
	b)Alumnos que aprobaron al menos un examen.
	c)Alumnos que aprobaron unicamente el ultimo examen.
Realice un programa que permita la lectura de datos y el calculo de las 
estadisticas.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float e1,e2,e3;
	int apro=0,apro1=0,apro3=0;
	
	for(int k=1;k<=5;k++){
		cout<<k<<" Digite la nota del primer examen: ";cin>>e1;
		cout<<k<<" Digite la nota del segundo examen: ";cin>>e2;
		cout<<k<<" Digite la nota del tercer examen: ";cin>>e3;
		cout<<"\n";
		
		if((e1>=60)&&(e2>=60)&&(e3>=60)){
			apro++;
		}
		if((e1>=60)||(e2>=60)||(e3>=60)){
			apro1++;
		}
		if((e1<60)&&(e2<60)&&(e3>=60)){
			apro3++;
		}
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<apro<<endl;
	cout<<"Alumnos que aprobaron al menos un examen: "<<apro1<<endl;
	cout<<"Alumnos que aprobaron solamente el tercer examen: "<<apro3<<endl;

	getch();
	return 0;
}
