#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int num1,num2,mayor,menor,pot,cont,aux,aux2;

	puts("Ingrese el primer numero");
	cin>>num1;
	puts("Ingrese el segundo numero");
	cin>>num2;

	if(num1>num2){
		mayor=num1;
		menor=num2;
	}
	else{
		mayor=num2;
		menor=num1;
	}

	aux=menor;

	for (pot=1;aux!=0; )
	{
		pot=pot*10;
		aux=aux/10;
	}

	aux2=mayor;

	for(cont=0; aux2>0; ){
		if(aux2%pot==menor){
			cont++;	
		} 
		aux2=aux2/10;
	}
	 
	printf("El numero %d es contenido %d en %d",menor,cont,mayor);
}
