#include <iostream>

using namespace std;

int main(){
	int num, div;
	
	cout << "Ingrese un numero" << endl;
	cin>>num;
	
	for(div=2; div<=num/2; div++){
		if(num%div==0)break;
	}
	if(div>num/2) puts("Es primo");
	else puts("No es primo");
}