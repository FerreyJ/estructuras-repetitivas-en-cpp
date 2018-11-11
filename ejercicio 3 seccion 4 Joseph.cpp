/*3. Realice un programa que calcule y muestre en la salida estándar la suma de los 
cuadrados de los 10 primeros enteros mayores que cero.*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
	int m=0;
	for(int n=1;n<=10;n++){
		cout<<"\nEl cuadrado de "<<n<<" = "<<pow(n,2);
		m+= pow(n,2);
	}
	cout<<"\n\nLa suma de los cuadrados es "<<m<<endl;
	getch();
	return 0;
}

