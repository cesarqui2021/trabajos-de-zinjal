#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float millas;
	int vari;
	int resul;
	cout << "Por favor ingrese un número entero que la  distancia sea en millas, para poder hacer una conversión\n";
	cout << "Ingrese el número entero:\n";
	cin >> millas;
	cout << " ¿Que conversión quiere realizar? \n\n1) millas a yardas\n \n2) millas a pies\n \n3) millas a pulgadas\n\n";
	cin >> vari;
	if (vari == 1) {
		resul = millas * 1760;
		cout << "La conversión de millas a yardas es: ";
		cout << resul << " Yardas";
	}
	if (vari == 2) {
		resul = millas * 190080;
		cout << "La conversión de millas a pies es: ";
		cout << resul << " Pies";
	}
	if (vari == 3) {
		resul = millas * 190080;
		cout << "La conversión de millas a pulgadas es: ";
		cout << resul << " Pulgadas\n"; 
	}
	return 0;
}
