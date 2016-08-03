#include <iostream>
#include <conio.h>
#include <stdio.h>
#define max 10

using namespace std;

int main(){
	int arre[max], n, i, cont;

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
	
	//Comparamos el primer valor con los siguientes
	cont=0;
	for (i=1; i<n; i++)
	{
		if (arre[i]==arre[0])
			cont++;
	}

}
