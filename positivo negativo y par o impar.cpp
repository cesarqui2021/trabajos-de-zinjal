#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Por favor ingrese un numero para verificar si es positivo o negativo y si es par o impar:\n";
	int numero;
	cin >> numero;
	if (numero >= 1){
		cout << "El número es positivo\n";
		if ( numero % 2 == 0 ){
		cout << "numero par";
	    }
		else {
			cout << "El numero es impar";
		}
	}else{
		cout << "El numero no es positivo";
	} 
	return 0;
}

