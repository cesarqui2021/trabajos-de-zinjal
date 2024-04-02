#include <iostream>

using namespace std;

int main() {
	char tipoTempInicial, tipoTempFinal;
	double tempInicial, tempFinal;
	
	cout << "Ingrese el tipo de temperatura inicial (C de Celsius/F de Fahrenheit/K de Kelvin/R Ranking) ";
	cin >> tipoTempInicial;
	
	cout << "Ingrese el valor de la temperatura inicial: ";
	cin >> tempInicial;
	
	cout << "Ingrese el tipo de temperatura final (C de Celsius/F de Fahrenheit/K de Kelvin/R Ranking) ";
	cin >> tipoTempFinal;
	
	// Conversiones
	if (tipoTempInicial == 'C') {
		if (tipoTempFinal == 'F') {
			tempFinal = (tempInicial * 9.0 / 5.0) + 32;
		} else if (tipoTempFinal == 'K') {
			tempFinal = tempInicial + 273.15;
		} else if (tipoTempFinal == 'R') {
			tempFinal = (tempInicial + 273.15) * 9.0 / 5.0;
		} else {
			tempFinal = tempInicial;
		}
	} else if (tipoTempInicial == 'F') {
		if (tipoTempFinal == 'C') {
			tempFinal = (tempInicial - 32) * 5.0 / 9.0;
		} else if (tipoTempFinal == 'K') {
			tempFinal = (tempInicial + 459.67) * 5.0 / 9.0;
		} else if (tipoTempFinal == 'R') {
			tempFinal = tempInicial + 459.67;
		} else {
			tempFinal = tempInicial; 
		}
	} else if (tipoTempInicial == 'K') {
		if (tipoTempFinal == 'C') {
			tempFinal = tempInicial - 273.15;
		} else if (tipoTempFinal == 'F') {
			tempFinal = (tempInicial * 9.0 / 5.0) - 459.67;
		} else if (tipoTempFinal == 'R') {
			tempFinal = tempInicial * 9.0 / 5.0;
		} else {
			tempFinal = tempInicial; 
		}
	} else if (tipoTempInicial == 'R') {
		if (tipoTempFinal == 'C') {
			tempFinal = (tempInicial - 491.67) * 5.0 / 9.0;
		} else if (tipoTempFinal == 'F') {
			tempFinal = tempInicial - 459.67;
		} else if (tipoTempFinal == 'K') {
			tempFinal = tempInicial * 5.0 / 9.0;
		} else {
			tempFinal = tempInicial;
		}
	}
	
	cout << "El valor de la temperatura final es " << tempFinal << " " << tipoTempFinal << endl;
	
	    return 0;
}
