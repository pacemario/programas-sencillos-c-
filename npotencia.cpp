#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int base, expo, pot, cont;

	puts("Ingrese la base");
	cin>>base;
	puts("Ingrese el exponente");
	cin>>expo;

	pot=1;
	
	if(expo>0){
		for(cont=0; cont<expo; cont++){
			pot=pot*base;		
		}
	printf("La potencia de %d elevado a la %d es %d",base,expo,pot);
	}
	else{
		for(cont=0; cont<-expo; cont++){
		pot=pot*base;
		} 
	printf("La potencia de %d elevado a la %d es 1/%d",base,expo,pot);	
	}
	

	return 0;
}