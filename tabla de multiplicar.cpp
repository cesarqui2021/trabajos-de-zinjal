#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	int tabla =  1;
	cout << "ingrese un numero para mostrar su tabla de multiplicar\n";
	cin >> numero;
	cout << "Tabla de multiplicar del " << numero << "\n";
	while (tabla <= 10) {
		int resultado = numero * tabla;
		cout << numero << " x " << tabla << " = " << resultado << endl;
		tabla++;
	}
	return 0;
}
