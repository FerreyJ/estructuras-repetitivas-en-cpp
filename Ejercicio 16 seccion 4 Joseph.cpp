/*16. Realice un programa que calcule la descomposicion en factores primos
de un numero entero. Por ejemplo: 20=2*2*5.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,m=2;
	
	cout<<"Ingrese el numero a descomponer en factores primos: ";cin>>n;
	cout<<endl;
	
	while(n>1){
		if(n%m==0){
		cout<<m<<" ";
		n/=m;
		}
		else{
			m+=1;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
