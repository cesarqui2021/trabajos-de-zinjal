#include <iostream>

using namespace std;
void opcion1() {
	cout << "Has seleccionado la opci�n 1." << endl;
}
void opcion2() {
	cout << "Has seleccionado la opci�n 2." << endl;
}
void opcion3() {
	cout << "Has seleccionado la opci�n 3." << endl;
}
void opcion4() {
	cout << "Has seleccionado la opci�n 4." << endl;
}
void opcion5() {
	cout << "Has seleccionado la opci�n 5." << endl;
}
int main() {
	int opcion;
	do {
		cout << "MENU" << endl;
		cout << "1. Opci�n 1" << endl;
		cout << "2. Opci�n 2" << endl;
		cout << "3. Opci�n 3" << endl;
		cout << "4. Opci�n 4" << endl;
		cout << "5. Opci�n 5" << endl;
		cout << "0. Salir" << endl;
		cout << "Selecciona una opci�n: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			opcion1();
			break;
		case 2:
			opcion2();
			break;
		case 3:
			opcion3();
			break;
		case 4:
			opcion4();
			break;
		case 5:
			opcion5();
			break;
		case 0:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opci�n inv�lida." << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0;
}
