#include <iostream>
#include <string>
int cifrarContrasenaNumerica(int contrasena, int numero) {
	contrasena += numero;          
	contrasena *= numero;         
	return contrasena;
}
std::string cifrarContrasenaTexto(const std::string& contrasena) {
	std::string resultado = contrasena;
	for (char& c : resultado) {
		if (c == 'i') {
			c = '1';
		} else if (c == 'e') {
			c = '3';
		} else if (c == 'a') {
			c = '4';
		} else if (c == 'o') {
			c = '0';
		} else if (c == 'u') {
			c = '*';
		}
	}
	return resultado;
}
void menu() {
	int opcion;
	do {
		std::cout << "Menú de Cifrado de Contraseñas:\n";
		std::cout << "1. Cifrar una contraseña numérica.\n";
		std::cout << "2. Cifrar una contraseña de texto.\n";
		std::cout << "3. Salir.\n";
		std::cout << "Seleccione una opción: ";
		std::cin >> opcion;
		switch (opcion) {
		case 1: {
			int contrasena, numero;
			std::cout << "Ingrese una contraseña numérica: ";
			std::cin >> contrasena;
			std::cout << "Ingrese un número para la operación: ";
			std::cin >> numero;
			int contrasenaCifrada = cifrarContrasenaNumerica(contrasena, numero);
			std::cout << "Contraseña cifrada: " << contrasenaCifrada << std::endl;
			break;
		}
		case 2: {
			std::string contrasena;
			std::cout << "Ingrese una contraseña de texto: ";
			std::cin.ignore(); 
			std::getline(std::cin, contrasena);
			std::string contrasenaCifrada = cifrarContrasenaTexto(contrasena);
			std::cout << "Contraseña cifrada: " << contrasenaCifrada << std::endl;
			break;
		}
		case 3:
			std::cout << "Saliendo...\n";
			break;
		default:
			std::cout << "Opción no válida. Intente de nuevo.\n";
			break;
		}
	} while (opcion != 3);
}
int main() {
	menu();
	return 0;
}
