#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int n,serie,cont;

	puts("Ingrese la cantidad de numeros que desea de la serie");
	cin>>n;
	
	serie=2;
	for(cont=0; cont<n; cont++){
		printf("%d\n",serie);
		if(serie%2==0) serie+=3;
		else serie*=2;
	}


}