#include <iostream>

using namespace std;

int main(){
int reves, num, aux;

printf("Ingrese el numero");
scanf("%d", &num);

reves=0;
aux=num;

	while(aux>0){
		reves*=10+aux%10;
		aux*=/10;
	}

	if(reves==num) printf("El numero es capicua");
		else printf("El numero no es capicua");
	
}
