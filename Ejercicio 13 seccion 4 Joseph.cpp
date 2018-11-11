/*13. Hacer un programa que realice la serie Fibonacci
	Fibonacci -> 1,1,2,3,5,8,13,...n.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,g=0,h=1,i=0;
	
	do{
		cout<<"\nIngrese el numero de elementos de la serie Fibonacci: ";cin>>n;
	}while(n<=0);
	cout<<"\n1 ";
	for(int j=1;j<n;j++){
		i=h+g;
		cout<<i<<" ";
		g=h;
		h=i;
	}
	cout<<endl;
	system("pause");
	return 0;
}

