#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero1;
	double numero2;
	int resultado;
	cout << "ingrese el primer numero" <<endl<< endl;
	cin >> numero1;
	cout << "ingrese el segundo numero" <<endl<< endl;
	cin >> numero2;
	resultado = numero1 + numero2;
	cout << "el resultado es: "<<endl;
	cout << resultado;
	resultado = numero1 - numero2;
	cout << "el resultado es: ";
	cout << resultado;
	return 0;
}

