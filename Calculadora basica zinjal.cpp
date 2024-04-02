#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero1;
	float numero2;
	char suma;
	char resta;
	char multiplicacion;
	char division;
	int op;
	float resultado;
	cout << "ingrese el primer numero: \n";
		cin >> numero1;
	cout << "ingrese el segundo numero: \n";
	cin >> numero2;
	cout << "ingresa el numero de la operacion necesaria \n 1 es para suma\n 2 es para resta\n 3 es para multicacion\n 4 es para division\n";
		cin >> op;
	if (op == 1)
	{
		resultado = numero1 + numero2;
		cout << "El resultado de la suma es: ";
		cout << resultado;
	}else if (op == 2){
		resultado = numero1 - numero2;
		cout << "El resultado de la resta es: ";
		cout << resultado;
	}else if (op == 3){
		resultado = numero1 * numero2;
		cout << "El resultado de la multiplicacion es: ";
		cout << resultado;
	}else if (op == 4){
		resultado = numero1 / numero2;
		cout << "El resultado de la division es: ";
		cout << resultado;
	}else
	{
		cout << " Ingresaste una operacion invalida";
	}	
	return 0;
}

