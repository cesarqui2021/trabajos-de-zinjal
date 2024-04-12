#include <iostream>

using namespace std;
void opcion1() {
	cout << "Has seleccionado la opción 1." << endl;
}
void opcion2() {
	cout << "Has seleccionado la opción 2." << endl;
}
void opcion3() {
	cout << "Has seleccionado la opción 3." << endl;
}
void opcion4() {
	cout << "Has seleccionado la opción 4." << endl;
}
void opcion5() {
	cout << "Has seleccionado la opción 5." << endl;
}
int main() {
	int opcion;
	do {
		cout << "MENU" << endl;
		cout << "1. Opción 1" << endl;
		cout << "2. Opción 2" << endl;
		cout << "3. Opción 3" << endl;
		cout << "4. Opción 4" << endl;
		cout << "5. Opción 5" << endl;
		cout << "0. Salir" << endl;
		cout << "Selecciona una opción: ";
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
			cout << "Opción inválida." << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0;
}
