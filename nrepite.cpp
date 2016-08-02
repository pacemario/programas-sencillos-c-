#include <iostream>
#define max 5

using namespace std;

int main(){
	char num1[max], num2[max], cont1, cont2;

	cout << "Ingrese el numero 1" << endl;
	cin >> num1;
	cout << "Ingrese el numero 2" << endl;
	cin >> num2;
	
	for(cont1=0; cont1<5; cont1++){
		for(cont2=0; cont2<5; cont2++){
			if(num1[cont1] == num2[cont2]){
				cout << num1[cont1] << " ";
			}
		}
	}
}