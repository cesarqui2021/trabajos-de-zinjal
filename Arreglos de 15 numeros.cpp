#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Arreglos
	int numeros[16]; // _ , _ , _ , _ , _
	
	cout << "Ingresa los numeros: " << endl;
	
	for (int i = 0; i < 16; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> numeros[i];
	}
	
	for (int i = 0; i < 16; i++) {
		cout << "Numero ingresado en la posicion " 
			<< i << ": " << numeros[i];
	}
	
	return 0;
}

