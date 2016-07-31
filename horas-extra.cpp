#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	float sueldo, tarifa, monto;
	int horasextra, horastrabajadas;

	puts("Ingrese el sueldo diario");
	scanf("%f",&sueldo);
	puts("Ingrese horas trabajadas");
	scanf("%d",&horastrabajadas);

	tarifa=sueldo/8;
	horasextra=horastrabajadas-40;

	if(horasextra == 0 || horasextra < 0)
		puts("No cobra monto adicional");
	else if (horasextra<=8)
	{
		monto=horasextra*tarifa*2;
		printf("El trabajador debe cobrar %.2f Bs.",monto);
	}
		else{
			monto=8*tarifa*2+(horasextra-8)*tarifa*3;
			printf("El trabajador debe cobrar %.2f Bs.",monto);		
		}
	
}
