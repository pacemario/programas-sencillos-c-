#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{	
	int num, fac, cont;
	
	puts("Ingrese un numero");
	scanf("%d",&num);
	
	cont=num;

	for (fac=1; cont>0; cont--)
	{
		fac=fac*cont;
	}

	printf("El factorial de %d es %d",num,fac);

}