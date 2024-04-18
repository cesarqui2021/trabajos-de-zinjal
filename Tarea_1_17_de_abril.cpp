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
	cout << "Hola mundo desde gotoxy"<< endl;

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

void menu2() {
	int coordx, coordy;
	char opcion;
	cout << "Por favor ingresa una coordenada en x para imprimir 'Hola mundo': "<< endl;
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y para imprimir 'Hola mundo': "<< endl;
	cin >> coordy;
	gotoxy(coordx, coordy);
	cout << "Hola mundo"<< endl;
	gotoxy(30, 30);
	cout << (char)112; 
	cout << (char)97; 
	cout << (char)111; 
	string nombre_companero;
	cout << endl << "Por favor ingresa el nombre de tu compañero: "<< endl;
	cin >> nombre_companero;
	cout << "Hola " << nombre_companero << ", ¿cómo estás?"<< endl;
}

int main() {
	int op;
	do {
		cout << endl << "Menú 1 o 2:" << endl;
		cout << "1. Imprimir hola mundo,mostrar un numero al centro y mostrar una palabra en distintas cordenadas" << endl;
		
		cout << "2. Mostrar cordenadas 30 y 30 y mostrar ascii raros luego saludar a un tu compañero" << endl;
		
		cout << "3. Salir" << endl;
		cout << "Seleccione una opción: "<< endl;
		cin >> op;
		switch (op) {
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
	} while (op != 3);
	return 0;
}
