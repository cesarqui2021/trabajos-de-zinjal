#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "ingrese el numero para saber si es positivo o negativo"<<endl;
	cin >> numero;
	if (numero <= 0 ){
		cout << "el numero es negativo"<<endl;
	}
	if (numero >= 1 ){
		cout << "el numero es positivo"<<endl;
	}
	return 0;
}

