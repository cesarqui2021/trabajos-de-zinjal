#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu1() {
	int coordx, coordy;
	cout << "Por favor ingresa una coordenada en x" << endl;
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y" << endl;
	cin >> coordy;
	gotoxy(coordx, coordy);
	cout << "Hola mundo desde gotoxy";
}
void menu2() {
	int num;
	cout << "Por favor ingresa un número" << endl;
	cin >> num;
	int centro_x = 40; // 
	int centro_y = 12; 
	gotoxy(centro_x, centro_y);
	cout << num;
	string palabra;
	cout << "Por favor ingresa una palabra" << endl;
	cin >> palabra;
	for (int i = 0; i < 10; ++i) {
		int rand_x = rand() % 80; 
		int rand_y = rand() % 25; 
		gotoxy(rand_x, rand_y);
		cout << palabra;
	}
}
int main() {
	int opcion;
	do {
		cout << endl << "Menú Principal:" << endl;
		cout << "1. Primer Menú" << endl;
		cout << "2. Segundo Menú" << endl;
		cout << "3. Salir" << endl;
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
		case 3:
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
		}
	} while (opcion != 3);
	return 0;
}
