#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int num,div,suma;

	puts("Ingrese el numero");
	scanf("%d",&num);

	suma=0;

	for(div=1; div<=num/2; div++){
		if(num%div==0) 
			suma+=div;
	}

	if(suma==num) puts("El numero es perfecto");
	else puts("El numero no es perfecto");
}
