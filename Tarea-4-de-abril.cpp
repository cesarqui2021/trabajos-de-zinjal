#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	
	do {
		cout << endl << "Bienvenidos al menu";
		cout << endl << "¿Desea seguir en e menu? 1. Si, 2. No";
		cin >> control;
	} while (control == 1);
	cout << "Salimos del menu";
	return 0;
}

