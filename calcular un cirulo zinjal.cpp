#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float radio;
	float pi = 3.14;
	cout << "calcular el area de un circulo \n";
	cout << "Ingresa el radio: ";
	cin >> radio;
	cout << "El area es: " << pi * (radio*radio) << endl;
	return 0;
}

