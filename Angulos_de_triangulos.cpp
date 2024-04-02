#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float lado1; 
	float lado2; 
	float lado3;
	cout << "Ayudame a calcular el tipo de triangulo (Equilatero, Isosceles o Escaleno)\n";
	cout << "Ingresa la longitud del primer lado (A): \n";
	cin >> lado1;
	cout << "Ingresa la longitud del segundo lado (B): \n";
	cin >> lado2;
	cout << "Ingresa la longitud del tercer lado (C): \n";
	cin >> lado3;
	if (lado1 == lado2 && lado2 == lado3) {
		cout << "Los tres lados son  iguales, por lo tanto es un triángulo Equilatero.\n";
	} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		cout << "Dos lados son iguales, por lo tanto es un triángulo Isósceles.\n";
	} else {
		cout << "Los tres lados son diferentes, por lo tanto es un triángulo Escaleno.\n";
	}
	return 0;
}

