#include <iostream>
#include <conio.h>
#include <stdio.h>
#define max 8

using namespace std;

int main(){
	int a[max], i, n, mayor, cambio, aux;

	//Validamos la cantidad de elementos del arreglo
	do{
		printf("Ingrese la cantidad del elementos de maximo %d",max);
		cin >> n;
	}while(n<2 || n>max);

	//Leemos los elementos del arreglo
	for(i=0; i<n; i++){
		printf("arre[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	cout << "Los muestra como se como se introducen" << endl;
	for(i=0; i<n; i++){
		cout << a[i] << " " << endl;

	}

	//Ordenamos el arreglo (Metodo de la Burbuja)
	do{
		cambio=0;
		for(i=0; i<n-1; i++)
			if(a[i] > a[i+1]){
				aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
				cambio=1;
			}
	}while(cambio==1);

	cout << "Muestra el arreglo ordenado" << endl;
	for(i=0; i<n; i++){
		cout << a[i] << " " << endl;

	}


}
