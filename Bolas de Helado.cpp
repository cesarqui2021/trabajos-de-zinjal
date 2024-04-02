#include <iostream>
using namespace std;

int main() {
	int cantidadsabores;
	string sabor = "chocolate";
	
	cout << "Elija la cantidad de bolas de helado que quiere: ";
	cin >> cantidadsabores;
	
	if (cantidadsabores > 6) {
		cout << "La cantidad maxima permitida es de 6." << endl;
		return 1;
	}
	
	for (int i = 0; i < cantidadsabores; ++i) {
		cout << "Sabor de la bola de helado " << i + 1 << ": " << sabor << endl;
	}
	
}
