/*11. Escribe un programa que calcule el valor de:
	2^1+2^2+2^3+...2^n.*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n,suma=0;
	
	cout<<"Introduce el ultimo elemento de potencia: ";cin>>n;
	
	for(int c=1;c<=n;c++){
		suma+=pow(2,c);
	}
	cout<<"\nLa suma de 2^"<<n<<" potencia es: "<<suma<<endl;
	getch();
	return 0;
}

