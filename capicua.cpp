#include <iostream>

using namespace std;

int main(){
int reves, num, aux;

puts("Ingrese numero");
scanf("%d",&num);

reves=0;
aux=num;

	while(aux>0){
		reves=reves*10+aux%10;
		aux=aux/10;
	}

	if(reves==num) printf("El numero es capicua");
		else printf("El numero no es capicua");
	
}
