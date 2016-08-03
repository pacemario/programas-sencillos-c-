#include <iostream>
#include <conio.h>
#include <stdio.h>
#define max 8

using namespace std;

int main(){
	int arre[max], i, n, mayor;

	//Validamos la cantidad de elementos del arreglo
	do{
		printf("Ingrese la cantidad del elementos de maximo %d\n",max);
		cin >> n;
	}while(n<2 || n>max);

	//Leemos los elementos del arreglo
	for(i=0; i<n; i++){
		printf("arre[%d]=",i);
		scanf("%d",&arre[i]);
	}

	mayor=arre[0];

	for(i=1; i<n; i++){
		if(arre[i]>arre[0]) mayor=arre[i];
	}

	printf("El mayor numero del arreglo es %d", mayor);

}
