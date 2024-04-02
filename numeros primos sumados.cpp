#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	int tabla = 2;
	cout << "ingrese un numero para sumarlo\n";
	cin >> numero;
	while (numero == 2){
		cout << "el numero es primo";
		cout << "Suma " << numero << "\n";
	    while (tabla <= numero) {
		  int resultado = numero + tabla;
		  cout << numero << " + " << tabla << " = " << resultado << endl;
		  tabla++;
	    }
	}
	return 0;
}
