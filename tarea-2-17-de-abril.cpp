#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
	int coordx, coordy;
	cout << "Por favor ingresa una coordenada en x para imprimir 'Hola mundo': ";
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y para imprimir 'Hola mundo': ";
	cin >> coordy;
	gotoxy(coordx, coordy);
	cout << "Hola mundo";
	gotoxy(30, 30);
	cout << (char)154; 
	string nombre_companero;
	cout << endl << "Por favor ingresa el nombre de tu compañero: ";
	cin >> nombre_companero;
	cout << "Hola " << nombre_companero << ", ¿cómo estás?";
	return 0;
}
