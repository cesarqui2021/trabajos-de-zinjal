#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float peso;
	float altura;
	float resultado;
	cout << "ingrese su peso actal\n";
	cin >> peso;
	cout << "ingrese su altura\n";
	cin >> altura;
	int op;
	cout << "ingrese el numero 1 si desea calcular su peso\n";
	cin >> op;
	if (op == 1){
		resultado = peso / altura*2;
		cout << " su peso es de\n";
		cout << resultado;
	}
	if (resultado < 18.5){
		cout << "Su peso es muy bajo esta en desnutricion\n";
	}
	else if (resultado == 18.5 || 25){
		cout << "su peso es normal\n";
	}
	else if (resultado == 25 || 30){
		cout << "tiene sobrepeso\n";
	}
	else if (resultado > 30){
		cout << "tiene obesidad debe bajar de peso\n";
	}
	return 0;

}
