#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int n, serieA,serieB,contb,contn;

	cout << "Ingrese la cantida de numero a generar" << endl;
	cin >> n;

	contn=0;
	
	for(serieA=2; contn<n; serieA+=3){
		serieB=-1;
		for(contb=0; serieA>=serieB; contb++){
			if(serieA==serieB){
				printf("%d\n",serieA);
				contn++;
				break;
			}
			if(contb%2==0){
				serieB+=3;
			} 
			else serieB*=2;	
		}	
	}
}
