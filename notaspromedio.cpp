#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main(){
	int notas[4], suma, prom, cont, contp;

	for(cont=0; cont<4; cont++){
		puts("Ingrese las notas");
		scanf("%d",&notas[cont]);
		//suma=suma+notas[cont];
	}

suma=notas[0]+notas[1]+notas[2]+notas[3];
prom=suma/4;

	contp=0;
	for(cont=0; cont<4; cont++){
		if(notas[cont] > prom){
			contp++;
		}
	}
	printf("Hay %d por encima de %d",contp,prom);
}

