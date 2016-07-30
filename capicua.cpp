#include <iostream>

using namespace std;

int main(){
int reves, num, aux;

cout << "Ingrese numero";
cin>>num;

reves=0;
aux=num;

	while(aux>0){
		reves=reves*10+aux%10;
		aux=aux/10;
	}

	if(reves==num){
		cout << "Es capicua";
	}
	else{ 
		cout << "No es capicua";
	}
	
}
