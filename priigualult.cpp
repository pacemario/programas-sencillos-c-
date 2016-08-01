#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int pri,ult,num;

	puts("Ingrese el numero");
	scanf("%d",&num);

	ult=num%10;

	do{
		
		pri=num%10;
		num=num/10;
	
	}while(num!=0);
	

	if(pri==ult) puts("Comienza y termina con el mismo numero");
	else puts("No comienza y termina con el mismo numero");
}
